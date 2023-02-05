#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int array[100];


//Funktionen
int menu();
void hauptmenu();
void zufallszahlen(int sz);
void AusgabeZ(int sz);
int maximum(int a[], int sz);


int main()
{
    menu();
    return 0;
}


int menu()
{
    int x;
    do
    {
        hauptmenu();
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            zufallszahlen(100);
            AusgabeZ(100);
            break;
        case 2:
            printf("2 Min-Wert berechnen");
            break;
        case 3:
            printf("3 Mittelwert");
            break;
        case 4:
            int array[7],size;
            printf("Geben Sie eine Array-Größe ein:\n");
            scanf("%d",&size);
            flip(array[7],size);
            break;
        case 5:
            maximum(array[100], 100);
        default:
            break;
        }
    } while (x != 9);
    return x;
}

void hauptmenu()
{
    printf("---------------------\n");
    printf("1 Zufallszahl generieren\n");
    printf("---------------------\n");
    printf("2 Min-Wert berechnen\n");
    printf("---------------------\n");
    printf("3 Mittelwert\n");
    printf("---------------------\n");
    printf("4 Tauschen\n");
    printf("---------------------\n");
    printf("5 Maximum Berechnen\n");
    printf("---------------------\n");
    printf("9 Beenden\n");
    printf("---------------------\n");
}

void zufallszahlen(int sz)
//werden Arrays übergeben, können diese beliebig groß sein.
{
    time_t t;
    time(&t);
    srand((unsigned int)t);


    //Zufallszahl generieren


    //Array erweitern
    int i;
    for (i = 0; i < sz; i++)
    {
        array[i] = rand() % 1001;
    }
}

void AusgabeZ(int sz)
{
    int i;
    printf("\n");
    for (i = 0; i < sz; i++)
    {
        printf("Zufallszahl: %d\n", array[i]);
    }
    printf("\n");
    //Warten bis eine Eingabe kommt, damit er ins Menü kommt
}

int maximum(int a[], int sz)
{
    int i;
}
void flip (int a[], int size)
{
	int i, zwischenSpeicher; //Zwischenspeicher nötig
	for (i=0;i<size/2;i++)
	{
		zwischenSpeicher = a [i];
		a[i] = a[size - i -1]; // da size = 7 mit 0-6.
		a[size-i-1]= zwischenSpeicher;
	};
};
