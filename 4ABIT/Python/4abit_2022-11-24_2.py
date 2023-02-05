# Grafik einbinden
import turtle as turty
turty.hideturtle()
turty.speed(0)

# Ein Objekt, das ein Rechteck repräsentiert:
class rechteck:
    def __init__(self):
        self.__laenge = 10
        self.__breite = 10
        self.__x = 0
        self.__y = 0
    def setPosition(self, x, y):
        self.__x = x
        self.__y = y
    def __getLaenge(self):
        return self.__laenge
    def __getBreite(self):
        return self.__breite
    def getDimensionen(self):
        # return [self.__laenge, self.__breite]
        return {
            'laenge':self.__getLaenge(),
            'breite':self.__getBreite()
        }
    def draw(self):
        turty.penup()
        turty.setposition(self.__x, self.__y)
        turty.pendown()
        turty.forward(self.__laenge)
        turty.left(90)
        turty.forward(self.__breite)
        turty.left(90)
        turty.forward(self.__laenge)
        turty.left(90)
        turty.forward(self.__breite)
        #turty.done()

# Eine Instanz des Rechtecks instanziieren
r = rechteck()
d = r.getDimensionen()

# x = -200
# y = 0
# while (True):
#     r.setPosition(x, y)
#     r.draw()
#     x += 1
