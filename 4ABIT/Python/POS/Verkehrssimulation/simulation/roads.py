# 25.12.2022 roads begonnen

class roads:
    '''roads: Klasse der Straßen'''
    def __init__(self) -> None:
       self.__begin = None
       '''__begin: Startpunkt der Straße'''
       self.__end = None
       '''__end: endpunkt der Straßen'''
       
       
    @property
    def begin(self):
        return self.__begin
    
    @property
    
    def end(self):
        return self.__end
    
    @begin.setter
    def begin(self,begin):
        self.__begin= begin

    @end.setter
    def end(self,end):
        self.__end = end
        
        


