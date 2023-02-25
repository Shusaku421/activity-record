# ここにコードを書いてね :-)
import smbus
from time import sleep

def get_temp_ADT7410_i2c(i2c, address):
    block = i2c.read_i2c_block_data(address, 0x00, 2)
    block0 = block[0] << 8
    wa = block0 | block[1]
    wa = wa >> 3
    temp = wa / 16.0
    return temp

def main():
    i2c = smbus.SMBus(1)
    address = 0x48

    try:
        while True:
            temp = get_temp_ADT7410_i2c(i2c, address)
            print("|  temp = {:6.2f}".format(temp))
            sleep(5)

    except KeyboardInterrupt:
        pass

if __name__ == "__main__":
    main()
