# dataAquisition.py

import os
import serial
from datetime import datetime
import subprocess
from time import sleep

def readSrial(ser):
    line = ser.readline().rstrip()
    line = line.strip().decode('utf-8')
    list2 = [line[i:i+2] for i in range(1, len(line), 2)]

    if len(list2) != 24:
        return -1,0,0

    list = []
    for i in range(0, len(list2), 1):
        n = int(list2[i], 16)
        list.append(n)
    list.pop()

    id = list[0]
    dibm = list[16]
    di = {}
    for i in range(1, 5):
        if((dibm & 0x1) == 0):
            di[i] = 0
        else:
            di[i] = 1
    dibm >>= 1

    analog = list[18] << 24 | list[19] << 16 | list[20] << 8 | list[21]
    ad = {}
    er = list[22]
    for i in range(1, 5):
        av = list[i + 18 - 1]
        if(av == 0xFF):
            ad[i] = -1
        else:
            ad[i] = ((av * 4) + (er & 0x3)) * 4
        er >>= 2

    temp = (int(ad[1]) - 500.0) / 10.0

    return id, temp, di[1]

def writeReceiveFile(fname, now, id, temp_ave, hcount):
    f = open(fname, 'a')
    date = "{:%Y/%m/%d %H%M%S}".format(now)
    temp = "{:5.2f}".format(temp_ave)
    s = date + "," + str(id) + "," + temp + "," + str(hcount) + "\n"
    f.write(s)
    f.close()

def main():
    print("dataAcquisition start")
    cnt = 0
    hcount = 0
    temps = [0.0] * 5

    fname = 'receive.txt'
    f = open(fname, 'w')
    f.close()

    ser = serial.Serial("/dev/ttyUSB0", 115200)

    try:
        while True:
            now = datetime.now()
            id, temp, human = readSrial(ser)

            if id == 6:
                print("{:%Y-%m-%d %H:%M:%S},".format(now), end="")
                print("{:d},{:6.2f},{:d}".format(id, temp, human))
                temps[cnt] = temp
                hcount += human
                cnt += 1

                if(cnt == 5):
                    temp_ave = sum(temps) / len(temps)
                    writeReceiveFile(fname, now, id, temp_ave, hcount)
                    temps = [0.0] * 5
                    hcount = 0
                    cnt = 0

                sleep(60)

    except KeyboardInterrupt:
        pass

    ser.close()


if __name__ == "__main__":
    main()
