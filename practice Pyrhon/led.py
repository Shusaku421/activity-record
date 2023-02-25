# ここにコードを書いてね :-)
import RPi.GPIO as GPIO
from time import sleep
def main():
    GPIO.setmode(GPIO.BCM)
    LED_PIN = 23

    GPIO.setup(LED_PIN, GPIO.OUT)

    try:
        while True:
            GPIO.output(LED_PIN, GPIO.HIGH)
            sleep(0.5)
            GPIO.output(LED_PIN, GPIO.LOW)
            sleep(0.5)

    except KeyboardInterrupt:
        pass

    GPIO.cleanup()

if __name__ == "__main__":
    main()
