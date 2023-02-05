#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <iostream.h>


const int MAXANZ = 30;
char Passwort[30];

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

void GetEingabe(char Eingabe[])
{
    char c;
    int i;
    printf("Passwort:\n");
    for (i=0;i<MAXANZ-1;i++)
    {
        Eingabe[i] = getch();
        printf("*");
        if (Eingabe[i]==13)
        {
            break;
        }
    Eingabe[i]=0;
    }
}
