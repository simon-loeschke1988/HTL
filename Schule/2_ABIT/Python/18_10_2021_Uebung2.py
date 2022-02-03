a=float(input("Geben Sie eine Zahl a ein: "))
b=float(input("Geben Sie Zahl b ein: "))
def Abfrage():

    while b-a >= 0.0001 and a < b:
                    c=b/2
                    print(c)
Abfrage()
