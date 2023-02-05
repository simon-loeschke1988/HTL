class vehicle:
    def __init__(self) -> None:
        self.__x = 0    ## position along a road
        
        # 25.12.2022: velocity hinzugefügt.
        # 25.12.2022: acceleration hinzugefügt
        
   
        self.__v = None
        ''' __v = velocity'''
        self.__a = None
        '''__a= acceleration'''
        
        
    # Getter-Methode für x     
    @property
    def x(self):
        return self.__x
    @property
    def v(self):
        return self.__v
    
    @property
    def a(self):
        return self.__a
    
    @a.setter
    def a(self,a):
        self.__a = a
    
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


    