import RPi.GPIO as GPIO

def main():
    GPIO.setmode(GPIO.BCM)
    LED_1 = 22
    LED_2 = 23
    SW_PIN = 24
    LED_3 = 25
    LED_STATE = 1

    GPIO.setup(LED_1, GPIO.OUT)
    GPIO.setup(LED_2, GPIO.OUT)
    GPIO.setup(LED_3, GPIO.OUT)
    GPIO.setup(SW_PIN, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

    try:
        while True:
            while (LED_STATE == 1) and (GPIO.input(SW_PIN) == GPIO.LOW):
                GPIO.output(LED_1, GPIO.LOW)
                GPIO.output(LED_2, GPIO.LOW)
                GPIO.output(LED_3, GPIO.LOW)
                if GPIO.input(SW_PIN) == GPIO.HIGH:
                    LED_STATE = 2

            while (LED_STATE == 2) and (GPIO.input(SW_PIN) == GPIO.LOW):
                GPIO.output(LED_1, GPIO.HIGH)
                GPIO.output(LED_2, GPIO.LOW)
                GPIO.output(LED_3, GPIO.LOW)
                if GPIO.input(SW_PIN) == GPIO.HIGH:
                    LED_STATE = 3

            while (LED_STATE == 3) and (GPIO.input(SW_PIN) == GPIO.LOW):
                GPIO.output(LED_1, GPIO.HIGH)
                GPIO.output(LED_2, GPIO.HIGH)
                GPIO.output(LED_3, GPIO.LOW)
                if GPIO.input(SW_PIN) == GPIO.HIGH:
                    LED_STATE = 4

            while (LED_STATE == 4) and (GPIO.input(SW_PIN) == GPIO.LOW):
                GPIO.output(LED_1, GPIO.HIGH)
                GPIO.output(LED_2, GPIO.HIGH)
                GPIO.output(LED_3, GPIO.HIGH)
                if GPIO.input(SW_PIN) == GPIO.HIGH:
                    LED_STATE = 1

    except KeyboardInterrupt:
        pass

    GPIO.cleanup()

if __name__ == "__main__":
    main()
# ここにコードを書いてね :-)
