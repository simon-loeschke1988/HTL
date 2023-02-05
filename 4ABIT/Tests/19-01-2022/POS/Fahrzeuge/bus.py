from fahrzeug import *


class bus(fahrzeug):
    def __init__(self):
        self.__passagiere = 0

    @property
    
    def passagiere(self,x):
        return self.__passagiere
    
    @passagiere.setter
    def passagiere(self,x):
     self.__passagiere = x
     self
        
    def getGesamtgewicht(self):
       return self.eigengewicht + (self.passagiere*80) +80
        
    
if __name__ == "main":
    bus = bus()
    bus.passagiere(20)
    bus.eigengewicht(2000)
    print(bus.getGesamtgewicht())

         

    


