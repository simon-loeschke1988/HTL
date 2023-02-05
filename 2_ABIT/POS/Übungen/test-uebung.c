#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Funktion, die überprüft ob in einem integer-array mindestens ein Wert negativ
ist, wenn ja: Rückgabe 1, nein Rückgabe 0  Größe des Arrays wird übergeben.
Form: int isNegative(int a[], int size)*/

//Deklarationen
int minimum(int a[], int groesse);
const int SIZE = 10;
int i, a[];
int main ()
{
	for(i=0;i<SIZE;i++){
	 a[i]= rand() % 10;
	 int x = minimum(a[i],SIZE);
	 printf("Minimum: %d",x);
	 printf("%ld \n",a[i]);
	}

	

return 0;
}

int minimum(int a[],int SIZE)
 {
	int min=a[10], i;
	for(i=1; i<SIZE; i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}
	return min;
}




