#0312020041 堅岡　周作
from microbit import *

class Button_A:

    def mov(self, x, y):
        getx = accelerometer.get_x()
        gety = accelerometer.get_y()
        if (abs(getx) > abs(gety)) and getx >= 500:
            x = x + 1
            if x + 1 > 4:
                x = 4
        elif (abs(getx) > abs(gety)) and getx <= -500:
            x = x - 1
            if x - 1 < 0:
                x = 0
        if (abs(gety) > abs(getx)) and gety >= 500:
            y = y + 1
            if y + 1 > 4:
                y = 4
        elif (abs(gety) > abs(getx)) and gety <= -500:
            y = y - 1
            if y - 1 < 0:
                y = 0
        return [x, y]
