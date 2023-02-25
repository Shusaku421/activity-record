#0312020041 堅岡　周作
from microbit import *
from System_coins import System_coins
from System_compass import System_compass
from Button_B import Button_B

coins = System_coins()
cmps = System_compass()
B = Button_B()

while True:
    if B.select_game():
        coins.begin_coins()
    else:
        cmps.begin_cmps()

