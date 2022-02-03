import time as t
#Ein kleines Text-Adventure

def main():
    Spiel()
    
   
    
def kleiner_Abstand():
    print("")

def großer_Abstand():
    print("")
    print("")
    
def persönliche_Begrüßung(value):
    print("{0}, herzlich Willkommen zum Weihnachtsspiel!".format(value))


def kurzer_Moment():
    t.sleep(2)

def nachdenken():
    t.sleep(4)
def begrüßung ():
    print("--------------------------------------------------------------")
    print("-----------Das Abenteuer der Familie Löschke------------------")
    print("--------------------------------------------------------------")
    t.sleep(1)
    print("")
    print("")

def vaddi_oder_muddi():
    while True:
        try:
            eltern = str(input("Bist du Vaddi oder Muddi?  "))
            if eltern == "Muddi" or eltern == "muddi":
                muddi = eltern
                return muddi
            elif eltern == "Vaddi" or eltern == "vaddi":
                vaddi = eltern
                return vaddi
            else:
                print("Nur 'Vaddi' oder 'Muddi' ist erlaubt!")
        except:
            print("Bitte Buchstaben eingeben")

# kurze Spielerklärung
def erklärung():
    print("Am Anfang eingeben, ob Du Muddi oder Vaddi sind. Dann jeweils die Fragen mit 'n' für nein oder j für 'ja' beantworten, es sei denn, eine andere Anweisung folgt")

def Morgen_Frage():
    kleiner_Abstand()
    print ("Es ist ein schöner Weihnachtsmorgen, möchtest du lesen oder spazieren gehen?")
    kleiner_Abstand()
    print("1 Für Lesen")
    print("2 Für spazieren gehen")

def Spiel():
    kleiner_Abstand()
    begrüßung()
    kleiner_Abstand()
    erklärung()
    kleiner_Abstand()
    name = vaddi_oder_muddi()
    kurzer_Moment()
    kleiner_Abstand()
    persönliche_Begrüßung(name)
    Morgen_Frage()

    

main()

