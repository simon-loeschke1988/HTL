# Klasse Figur
class vehicle:
    __speed = 0
    __brand = ""
    def __init__(self):
        pass
    def setData(self, speed = 0, brand = ""):
        __speed = speed
        __brand = brand

# Klasse Auto
class car(vehicle):
    def __init__(self, Raeder = 4, Tueren = 4):
        self.__Raeder = Raeder
        self.__Tueren = Tueren

# Klasse Mottorad
class cycle(vehicle):
    def __init__(self, Raeder = 2, Tueren = 0):
        self.__Raeder = Raeder
        self.__Tueren = Tueren

VW = car
VW.setData(250,"VW")



yamaha = cycle
yamaha.setData(300,"Yamaha")

