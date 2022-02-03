#include <stdio.h>

int main () {

	
float einkommen, miete, hobbys, internetTelefon, einkaeufe;
 
 printf("Willkommen im Budget-Programm!\n");
 printf("Hier koennen Sie ausrechnen, wie gross Ihr woechentliches Budget ist!\n");
 printf("Wie hoch ist Ihr Einkommen?\n");
 
 scanf("%f",&einkommen);
 
 printf ("Wie hoch ist Ihre Miete?\n");
 scanf("%f",&miete);
 printf ("Wie viel Kosten Ihre Hobbys?\n");
 scanf("%f",&hobbys);
 printf ("Wie viel geben Sie fuer Internet und Telefon aus?\n");
 scanf("%f",&internetTelefon);
 printf ("Wie viel Kosten Ihre Einkaeufe?\n");
 scanf("%f",&einkaeufe);
 printf("Ihre Einnahmen und Ausgaben Sind wie folgt:\n");
 printf("1. Einnahmen: %f EUR \n Miete: %f EUR \n Hobbys: %f EUR \n Internet und Telefon: %f EUR \n Einkauf: %f EUR \n", einkommen,miete,hobbys,internetTelefon,einkaeufe);
 float budget = (einkommen - (miete + hobbys + internetTelefon + einkaeufe))/4.33;
 printf("Ihr woechentliches Budget beträgt: %f EUR \n",budget);
 return 0;   
}

