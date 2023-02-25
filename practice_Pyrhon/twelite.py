import serial

def main():
    ser = serial.Serial("/dev/ttyUSB0", 115200)

    try:
        while True:
            line = ser.readline().rstrip()
            line = line.strip().decode('utf-8')

            if len(line) > 0 and line[0] == ':':
                print("/n{}".format(line))
            else:
                continue

            list2 = [line[i:i+2] for i in range(1, len(line), 2)]
            list = []

            for i in range(0, len(list2), 1):
                n = int(list2[i], 16)
                list.append(n)
            list.pop()

            if ((list[1] == 0x81) and (list[0] == 6)):
                print("ID={:d}".format(list[0]))

                di_bit = 0x01
                ad_bit = 0x03
                DI = [0, 0, 0, 0]
                AD = [0, 0, 0, 0]
                for i in range(0, 3, 1):
                    DI[i] = list[16] & di_bit
                    AD[i] = (list[i+18] * 4 + (list[22] & ad_bit)) * 4
                    di_bit = 1 << 1
                    ad_bit = 11 << 2
                print("D1={:d} D2={:d} D3={:d} D4={:d}".format(DI[0], DI[1], DI[2], DI[3]))
                print("AD1={:04d} AD2={:04d} AD3={:04d} AD4={:04d}".format(AD[0], AD[1], AD[2], AD[3]))

                temp = (AD[0] - 500.0) / 10.0
                print("temp={:6.2f}".format(temp))
                for i in range(0, len(list)):
                    print("{:02X}".format(list[i]), end="")
                print()
                print("\n")

    except KeyboardInterrupt:
        pass
    ser.close()

if __name__ == "__main__":
    main()
