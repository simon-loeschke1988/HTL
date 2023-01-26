from Fahrzeuge import *

if __name__ == '__main__':

    # Bus
    bus = bus()
    bus.eigengewicht = 2000
    bus.setHoechstgeschwindigkeit(100)
    print(f'Der Bus hat eine Höchstgeschwindigkeit von v = {bus.getHoechstgeschwindigkeit()} km/h')
    bus.passagiere = 8
    print(f'Der Bus hat {bus.passagiere} Passagiere')
    print(f'Der Bus hat ein Eigengewicht von {bus.eigengewicht} kg')
    print(f'Der Bus hat ein Gesamtgewicht von {bus.getGesamtgewicht()} kg')

    # LKW
    lkw = lkw()
    lkw.eigengewicht = 4000
    lkw.setHoechstgeschwindigkeit(80)
    print(f'Der LKW hat eine Höchstgeschwindigkeit von v = {lkw.getHoechstgeschwindigkeit()} km/h')
    lkw.ladegewicht = 1500
    print(f'Der LKW hat ein Eigengewicht von {lkw.eigengewicht} kg')
    print(f'Der LKW hat ein Ladegewicht von {lkw.ladegewicht} kg')
    print(f'Der LKW hat ein Gesamtgewicht von {lkw.getGesamtgewicht()} kg')

    #Transportunternehmen
    tpu = transportunternehmen()
    tpu.addFahrzeug(bus)
    tpu.addFahrzeug(lkw)
    tpu.printFahrzeuge()
