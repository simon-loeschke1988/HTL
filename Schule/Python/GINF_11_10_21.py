#1. Vergleichsoperatoren
#2. logische Ausdrücke
#3. Verzweigungen

#Binäre Operatoren bislang:
a=19
b= 4

c= a+b
c = a //b # Ganzzahlige Devision
c = a%b # Rest bei ganzzahliger Operation

# Vergleichsoperatoren

c = a < b
print("c = a < b = {0} < {1} = {2}".format(a,b,c))
c = a <=b
print("c <= a < b = {0} <= {1} = {2}".format(a,b,c))
c = a > b
print("c = a > b = {0} > {1} = {2}".format(a,b,c))
c = a >= b 
print("c >= a < b = {0} >= {1} = {2}".format(a,b,c))
c = a == b
print("c = a == b = {0} < {1} = {2}".format(a,b,c))
c = a != b
print("c != a < b != {0} < {1} = {2}".format(a,b,c))

# logische operatoren
#liegt 2 zwischen 3 und 4?
# linke grenze 3< x
# rechte grenze x< 4
#Gesamtaussage:
#beide aussagen müssen wahr sein, damit die gesamtausage wahr ist.

#oder: eine der beiden aussgaen muss wahr sein, damit die Gesamtaussage wahr ist.

a= True
b = True
c = a and b

print (c)

print("{0} {1} {2}".format(True,True, True and True))
print("{0} {1} {2}".format(True,False, True and False))
print("{0} {1} {2}".format(False,True, False and True))
print("{0} {1} {2}".format(False,False, False and False))

print((3<2) and (2<4))

# Ist eine Zahl außerhalb eines bestimmten Bereiches?
# Ist die Zahl größer als 4 oder kleiner als 3?

print((2<3) or (4>2))


# Verzweigungen

#Liegt die Zahl 2 zwischen 3 und 4?

x = 2 
a = 3
b = 4

(a<x) # liegt a links von x?
(x<b) #liegt b rechts von x?
(a<x) and (x<b) # Liegt x zwischen a und b? Schlechte Antwort weil nur true oder false

if (a<x) and (x<b):
    print("Die Zahl x liegt zwischen a und b!")
else:
    print("Die Zahl x liegt nicht zwischen a und b!")