import math
 
def berechnung():
    print("Geben Sie eine Dezimalzahl ein")
    a=input()

    print("Geben Sie eine zweite Dezimalzahl ein")
    b=input()
    quit = False

    for quit in a:
            try:
                a = int(a)
                quit = True
            except:
                print ("Bitte geben Sie eine ganze Zahl ein.")
    for quit in b:
            try:
                b = int(b)
                quit = True
            except:
                print ("Bitte geben Sie eine ganze Zahl ein.")

    c = int(a) // int (b)
    c= int(c)
    d = a % b
    e=str(c)
    f=str(d)
    g='+'

    print("Das Ergebnis lautet:")
    print(e+g+f)


berechnung()

