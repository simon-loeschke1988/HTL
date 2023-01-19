class vehicle:
    def __init__(self) -> None:
        self.x

    @property
    def x(self):
        return self.x
    
    @x.setter
    def x(self,x):
        self.x=x
    

if __name__== '__main__':
    a = vehicle()
    a.x == 10
    print(a.x)