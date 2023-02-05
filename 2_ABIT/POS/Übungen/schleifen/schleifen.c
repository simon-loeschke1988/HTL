#include <math.h>
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
    scanf("%hd", &b); //Compiler fordert %hd als Placeholder.
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
// Hier Beginn Übung 6.2.5 -> Zwei Funktionen

long long bin2dec(long long binaer)
{
    long long dezimalzahl = 0, i = 0, moduloperation;

    while (binaer != 0)
    {
        moduloperation = binaer % 10;
        binaer /= 10;
        dezimalzahl += moduloperation * pow(2, i);
        ++i;
    }

    return dezimalzahl;
}
void uebung625()
{
    long long binaer;
    printf("Geben Sie eine Binärzahl ein:\n"); //Bash liest umlaute/Compiler kann damit umgehen.
    scanf("%lld", &binaer);
    printf("Die Dezimalzahl ist: %lld\n", bin2dec(binaer));
}
// Ende Übung 6.2.5

//Übung 6.2.6

long long dec2bin(unsigned int dzahl);
void uebung626()
{
    unsigned int dezimal;
    printf("Geben Sie eine Dezimalzahl ein: ");
    scanf("%d", &dezimal);
    printf("Die Zahl %d lautet %lld in ihrer binären Representation", dezimal, dec2bin(dezimal));
}
long long dec2bin(unsigned int dzhal)
{
    long long bzahl = 0;
    int rem, i = 1;
    int dzahl;

    while (dzahl != 0)
    {
        rem = dzahl % 2;
        dzahl /= 2;
        bzahl += rem * i;
        i *= 10;
    }

    return bzahl;
}


int main()
{
    uebung622();
    uebung624();
    uebung625();
    uebung626();
    return 0;
}
