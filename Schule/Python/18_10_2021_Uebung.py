#Schreiben Sie ein Python-Skript, das vom Benutzer 4 Zahlen in eine Liste L einliest, diese aufsteigend sortiert und diese ausgibt.

L=[]
quit= False
def Benutzereingabe():
    for x in range(4):
        L.append(x) 
          

def kontrolle():
    while not quit:
        try:
            x= int(input("Geben Sie eine Zahl ein:"))
            Benutzereingabe()
        except:
            print("Geben Sie eine Ganzzahl ein!")

kontrolle()
L.sort()
print(L)  