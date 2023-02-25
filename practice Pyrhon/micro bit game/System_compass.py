#0312020041 堅岡　周作
from microbit import *
import utime
import random

class System_compass:
    def __init__(self):
        self.__cmps_time = []

    def dire_judge(self, ans, head):
        if ans == 'E' and (head >= 85 and head < 95):
            return True
        elif ans == 'S' and (head >= 175 and head < 185):
            return True
        elif ans == 'W' and (head >= 265 and head < 275):
            return True
        elif ans == 'N' and (head >= 355 or head < 5):
            return True

    def begin_cmps(self):
        start = utime.ticks_ms()
        crct = 0
        cmps = System_compass()

        while crct < 5:
            direction = ['E', 'W', 'S', 'N']
            ans = random.choice(direction)
            head = compass.heading()
            while not cmps.dire_judge(ans, head):
                display.show(str(ans))
                head = compass.heading()
            display.clear()
            crct = crct + 1
        end = utime.ticks_ms()
        self.__cmps_time.append((end - start) / 1000)

        if (self.__cmps_time[-1] == min(self.__cmps_time)):
            display.show('R')
            sleep(1500)
        display.scroll(str(self.__cmps_time[-1]) + 's')
        return 0
