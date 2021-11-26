#Einfachere Lesbarkeit
def getFloat(varname: str) -> float:
    while True: 
        try:
            x = float (input('{0} = '.format(varname)))
            return x
        except:
            print('Eingabe falsch, bitte noch einmal eingeben!')

def readOrderedVar(varname1: str, varname2:str) -> list:
    while True:
        a= getFloat(varname1)
        b= getFloat(varname2)
    if a < b: #richtige Eingabe
        return [a,b]
    elif a==b: #falsche Eingabe
        print('FALSCH')
    else: #fast richtig
        print('Tausch')
        t = a
        a = b
        b = a
        return [a,b]
L = readOrderedVar('a', 'b')
a = L[0]
b = L[1]

e = 1E-7
n = 0

while (a-b) > e:
    b = (a+b)/2
    n = n +1
    print('{0} {1} {2}'.format(n,a,b))

#Definition einer math. Funktion zu Berechnungszwecken

def f(x: float) -> float:
    return 4 -x **2

print(f(2))