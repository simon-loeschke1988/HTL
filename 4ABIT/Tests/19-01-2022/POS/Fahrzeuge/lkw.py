from fahrzeug import *


class lkw(fahrzeug):
    def __init__(self):
        self.__ladegewicht = 0.0
        
    @property
    def ladegewicht(self):
        return self.__ladegewicht
    
    @ladegewicht.setter
    def ladegewicht(self,x):
      self.__ladegewicht = x
      
    
    def getGesamtgewicht(self,x):
        return self.eigengewicht + self.ladegewicht
    

if __name__ == "__main__":
    
    lkw = lkw()
    lkw.ladegewicht(20.0)
    print(lkw.ladegewicht())
    
    
   

