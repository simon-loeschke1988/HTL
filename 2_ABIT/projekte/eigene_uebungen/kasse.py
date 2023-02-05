import time
#Funktionsdefinitionen:

def main ():
   
        welcome_Message()
        end_Program()
        
        



def welcome_Message():
    print("")
    print("******************************************************")
    print("******* Kassy - Das innovative Kassenprogramm ********")
    print("******************************************************")
    print("(c) by Simon Löschke, 2022")
    print("")
    time.sleep(2)

def till_Start():
    print("Test")

def end_Program():
    c = str(input("Eingabe:"))
    while True:
        if c == ".":
            break
        else:
            abfrage()
            continue
            
def abfrage():
    print("Sie können folgende Produkte wählen:")
    print("(1) Burger ")
    

            

# Hier beginnt das Programm

main()
