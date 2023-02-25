#0312020041 堅岡　周作
from microbit import *

class Button_B:
    def select_game(self):
        flg = 1
        while not button_b.was_pressed():
            display.scroll("unselected")
            if button_b.was_pressed():
                while not button_a.was_pressed():
                    while flg > 0:
                        display.scroll('coin')
                        if button_a.was_pressed():
                            return True
                        if button_b.was_pressed():
                            flg = flg * -1
                    while flg < 0:
                        display.scroll('cmps')
                        if button_a.was_pressed():
                            return False
                        if button_b.was_pressed():
                            flg = flg * -1
