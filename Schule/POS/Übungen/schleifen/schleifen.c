#include <stdio.h>
//Übung 6.2.2
void uebung622()
{
    int groesse = 10;
    int i;
    short int summe1[groesse], summe2[groesse];

    summe1[0] = 1;
    summe2[0] = summe1[0];
    printf("\t summe1: %d \n \t summe2: %d \n", summe1[0], summe2[0]);

    //for-schleife implementieren
    for (i = 0; i < groesse; i++)
    {
        summe1[i] = summe1[i - 1] + 2;
        summe2[i] = summe2[i - 1] + summe1[i];
        printf("\t summe1: %d \n\n \t summe2: %d \n\n", summe1[i], summe2[i]);
    };
}

void uebung624()
//Übung 6.2.4
{
    short int b;
    printf("\n\nGeben Sie die Laenge der P.-Summe ein: \n");
    scanf("%d", &b);
    short int i, a[b], c[b];

    a[0] = 1;
    c[0] = a[0];

    for (i = 0; i < b; i++)
    {
        a[i] = a[i - 1] + 2;
        c[i] = c[i - 1] + a[i];
        printf("\n\t a: %d \n\t b: %d\n", a[i], c[i]);
    };
}


int main()
{
    uebung622();
    uebung624();
    return 0;
}
