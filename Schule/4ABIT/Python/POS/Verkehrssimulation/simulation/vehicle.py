class vehicle:
    def __init__(self) -> None:
        self.__x = 0    ## position along a road
        self.__v = None

    # Getter-Methode für x     
    @property
    def x(self):
        return self.__x
    @property
    def v(self):
        return self.__v
    
    @x.setter
    def x(self, x):
        self.__x = x
    @v.setter
    def v(self,v):
        self.__v = v

if __name__ == '__main__':
    a = vehicle()
    a.x = 10
    print(a.x)


    