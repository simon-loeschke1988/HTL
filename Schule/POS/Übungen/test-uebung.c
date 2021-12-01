#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Funktion, die überprüft ob in einem integer-array mindestens ein Wert negativ
ist, wenn ja: Rückgabe 1, nein Rückgabe 0  Größe des Arrays wird übergeben.
Form: int isNegative(int a[], int size)*/

//Deklarationen

const int SIZE = 10;
int i, a[];
int main ()
{
	for(i=0;i<SIZE;i++){
	 a[i]= rand() % 21 -1;
	}
	for (i=0;i<SIZE;i++)
	{
		printf("%d \n",a[i]);
	}


return 0;
}
