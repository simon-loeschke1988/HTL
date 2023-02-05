#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char vorname[100];
    char nachname[100];
    char kuerzel[5];
    printf("\nVorname: \n");
    scanf("%s", vorname);
    printf("\nNachname: \n");
    scanf("%s", nachname);
    strncpy(kuerzel, nachname, 3);
    kuerzel[3] = vorname[0];
    kuerzel[4] = 0;
    printf("\nKürzel: %s\n", kuerzel);


    return 0;
}
