from fahrzeug import *

class transportunternehmen:
    def __init__(self):
        self.__fahrzeuge = []
        
    @property
    
    def fahrzeuge(self):
        return self.__fahrzeuge
    
    @fahrzeuge.setter 
    def fahrzeuge(self,x):
        self.__fahrzeuge.append(x)
        
    def addFahrzeug(vehicle):
        self.fahrzeuge(vehicle)
        
    
    def printFahrzeige(self):
        print(self.fahrzeuge())
        

    