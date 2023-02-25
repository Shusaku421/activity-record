import spidev
from time import sleep

def analog_read(spi, ch):
    din = [6 + (ch >> 2), ch << 6, 0]

    r = spi.xfer2(din)
    r1 = (0x0F & r[1]) << 8
    adc_out = r1 + r[2]
    return adc_out

def main():
    spi = spidev.SpiDev()
    spi.open(0, 0)
    spi.mode = 0x00
    spi.max_speed_hz = 1000000

    try:
        while True:
            adc_out = analog_read(spi, 0)
            volt = (adc_out / 4095) * 3.3
            temp = (volt - 0.6) / 0.01
            print("adc_out={:4d}".format(adc_out), end="")
            print("temp={:6.2f}".format(temp))
            sleep(5)

    except KeyboardInterrupt:
        pass

    spi.close()

if __name__ == "__main__":
    main()
