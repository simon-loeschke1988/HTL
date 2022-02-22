#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    /*char vName[100];
    printf("Hallo, Wie heißt du?\n");
    scanf("%s", vName);
    printf("Hallo %s", vName);*/

    int i;
    char eingabe[100];
    char passwort[] ="12345";
    for (i=0;i<3;i++)
    {
        printf("Passwort: \n");
        scanf("%s",eingabe);
        if (!strcmp(eingabe,passwort))
        {
            {printf("Passt!\n");
            exit(1);}
        }
        printf("3 Versuche: falsch!");
    }
}
