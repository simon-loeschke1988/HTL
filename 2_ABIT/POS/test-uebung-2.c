#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Funktion, die �berpr�ft ob in einem integer-array mindestens ein Wert negativ
ist, wenn ja: R�ckgabe 1, nein R�ckgabe 0  Gr��e des Arrays wird �bergeben.
Form: int isNegative(int a[], int size)*/

//Deklarationen


// Funktionen
int Minimum(int a[],int size);
int main ()
{
	int min;
	int i = 1;
	int a[10];
	int size= 9;
	for(i=0;i<size;i++){
	 a[i];
	 Minimum(a[i],10);
	 printf("%d",min);
	 	}
	

return 0;
}

int Minimum(int a[], int size)
{
	int min,i,size;
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
