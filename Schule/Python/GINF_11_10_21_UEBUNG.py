# (a) Schreiben Sie ein Python-Programm, dass vom Benutzer eine Dezimalzahl x anfordert und entscheidet,
#     ob die Zahl positiv, negativ oder neutral ist.
# (b) Prüfen Sie, ob die Zahl x im Intervall (-oo;-5) oder (-10;10) oder (15;+oo) liegt.


quit = False
def Abfrage():
    
    if x >0:
        print("X ist positiv!")
    elif x==0:
        print("X ist neutral!")
    else:
        print("X ist negativ!")


def Intervall():
       
           
    if x <=-15:
        print("X liegt im Intervall zwischen -oo und -15")
    elif -10<=x<=10:
        print("X liegt im Intervall zwischen -10 und 10")
    elif x>=15:
        print("X liegt im Intervall zwischen 15 und +oo ")
    else:
        print("Die Zahl x liegt nicht in den gefragten Intervallen")


    
     