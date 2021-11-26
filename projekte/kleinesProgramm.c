#include <stdio.h>
#include <stdlib.h>

/* 18.11.2021 Erstellung
*/

int b;


int main ()
{
	int a;
	eingabe();
	berechnung();
	ausgabe();
	return 0;
}

int eingabe()
{
	printf("Geben Sie eine Zahl b ein: \n");
	scanf("%d",&b);
	return b;
}
int berechnung()
{
	int a; 
	a = b * b;
	return a;
}
void ausgabe()
{
	int a;	
	printf("Die Zahl b lautet %d",a);
}
