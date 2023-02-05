# Das Konzept der Vererbung

# Klasse Figur
class figur:
    __x = 0
    __y = 0
    def __init__(self):
        pass
    def setPosition(self, x = 0, y = 0):
        __x = x
        __y = y

# Klasse Rechteck
class rechteck(figur):
    def __init__(self, laenge = 10, breite = 10):
        self.__laenge = laenge
        self.__breite = breite

# Klasse Dreieck
class dreieck(figur):
    def __init__(self, breite = 10, hoehe = 10):
        self.__breite = breite
        self.__hoehe = hoehe

f = figur
r = rechteck
r.setPosition(10, 10)
d = dreieck
d.setPosition(20, 20)