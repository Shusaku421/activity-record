#0312020041 堅岡　周作
from microbit import *
from Button_A import Button_A
import utime

class System_coins:
    def __init__(self):
        self.__a = Button_A()
        self.__coins_time = []

    def begin_coins(self):
        start = utime.ticks_ms()
        point, brt = [2, 2], 1
        set_coins = [[0, 0], [0, 4], [4, 0], [4, 4]]

        display.set_pixel(point[0], point[1], brt)
        for locate in set_coins:
            display.set_pixel(locate[0], locate[1], 7)

        while len(set_coins) > 0:
            point = self.__a.mov(point[0], point[1])
            if point in set_coins:
                set_coins.remove(point)
                brt = brt + 2

            display.clear()
            display.set_pixel(point[0], point[1], brt)
            for locate in set_coins:
                display.set_pixel(locate[0], locate[1], 7)
            sleep(350)
        end = utime.ticks_ms()
        self.__coins_time.append((end - start) / 1000)

        if (self.__coins_time[-1] == min(self.__coins_time)):
            display.show('R')
            sleep(1500)
        display.scroll(str(self.__coins_time[-1]) + 's')
