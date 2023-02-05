#!/bin/python3

from ast import Try
from platform import system
import webbrowser

def main():
    answer=''
    frage_Mietzi(answer)
    print("{0}".format(answer))






def frage_Mietzi(test):
    test = input("Sind Sie ein Mietz? ")
    durchlauf = True
    
    while durchlauf:
        if test == "ja":
            durchlauf = False
            katze()
            return test
                        
        elif test == "nein":
            print("Dieses Programm ist nur für Mietzis.")
            durchlauf = False
        else:
            print("Bitte geben Sie JA oder NEIN ein.")
            durchlauf = False
            frage_Mietzi(test)
    
def katze():
    frage = str(input("Möchten Sie eine Katze sehen?"))
    if frage == "ja":
        url = 'https://meinhaustierundich.elanco.com/sites/g/files/adhwdz556/files/styles/paragraph_image/public/2020-07/kurzhaarkatze_liegt_auf_dem_bett.jpg?itok=1ZZZ0Mnr'
        webbrowser.get('firefox').open(url)
    else:
        print("Böse Katz!")

main()