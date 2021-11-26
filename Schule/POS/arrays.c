#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> //Für Funktion Time

//Bsp: Zufallszahlen in Array schreiben
/* int a[100] = > 100 a's, MÜSSEN vom gleichen Datentyp sein
100 sind die Anzahl der Elemente, von 0-99!*/

// Deklarationen
const int ANZ = 100;
double Mittelwert(int x[]); //klarmachen, dass ein Array kommt
double stdabweichung(int x[]);

// Main

int main ()
{
	int i, a[ANZ];
	double mw, sigma;
	srand(time(0)); //Zufallsgenerator
	for (i = 0;i < ANZ;i++)
	{
		a[i]=rand() % ANZ; 
	}
	mw = Mittelwert(a);
	printf("Mittelwert: %f\n",mw);
	sigma = stdabweichung(a);
	printf("Abweichung: %f \n",sigma);
	return 0;
}

//Funktionen


double Mittelwert(int x[])
{
	int i;
	double sum = 0.0;
	for (i=0; i<ANZ; i++)
	{
		sum += x[i];
	}
	return sum / (double) ANZ; //Mittelwert berechnen
}

double stdabweichung(int x[])
{
	int i;
	double sum = 0.0;
	double mw = Mittelwert(x);
	for (i=0 ; i<ANZ; i++)
	{
		sum += (x[i] - mw) * (x[i] - mw);
	}
	return sqrt(sum / (double) ANZ - 1); //Standartabweichung
}

