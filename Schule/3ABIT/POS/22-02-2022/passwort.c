#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char Passwort[100];

void GetEingabe();

int main()
{
	int i,ok=0;
	char Eingabe[100];
	for (i=0;i<3;i++)
	{
		GetEingabe(Eingabe);
		if(!strcmp(Passwort,Eingabe))
		{
			ok =1;
			break;
		}
		if (ok==1)
		{
			printf("Passwort OK");
		}
		else
		{
			printf("Kein Zugriff");
		}
	}
	return 0;
}
