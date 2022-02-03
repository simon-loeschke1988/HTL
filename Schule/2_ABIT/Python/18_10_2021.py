L = [1,"Hallo",4.5,True]


print(type(L))
for x in range(0,3):
        print(L[x],end=', ')
print(L[3])

#Alternativ:
for x in range(0,len(L)):
    print(L[x])


print(L.pop())

#Schreiben Sie ein Python-Skript, das vom Benutzer 4 Zahlen in eine Liste L einliest, diese aufsteigend sortiert und diese ausgibt.