from .vehicle import *

class roads(vehicle):
    def __init__(self) -> None:
        super().__init__()
        
    @property
    def x(self):
        return self.__x
    
    @x.setter
    def x(self,x):
        self.__x= x
        


