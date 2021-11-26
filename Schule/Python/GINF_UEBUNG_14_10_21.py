quit = False
def Abfrage():
    i1: 0<=x<=20
    i2: 0<x<5
    i3: 0<x<10
    i4: 0<x<15
    if i1 and i2:
        print("x liegt in den Intervallen [0;5]!")
    elif i3 or i2:
        print("x liegt im Intervall [0;5] und [0;10]!")
    elif i3 and x > 5:
        print("x ist nur Element von [0;10]")
    elif i4 or i3 or i2:
        print("x liegt im Intervall [0;5] und [0;10] und [0;15]!")
    elif i4 and x>10:
        print("x liegt nur im Intervall [0;15]!")
    elif i1 and x>15:
        print("x liegt nur im Intervall [0;20]")
    elif i1:
        print("x ist Element aller Intervalle")
    else:
        print("Geben Sie eine Ganzzahl zwischen 0 und 20 ein!")

while not quit:
    try:
     x = input("Geben Sie eine Dezimalzahl X ein!")
     x=float(x)
     quit=True
     Abfrage()     
    except:
     print("Bitte geben Sie eine Dezimalzahl ein!")