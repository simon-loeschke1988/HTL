#include <stdio.h>
#include <math.h>

int main ()
{
	double a,b,c;
	double x1;
	double x2;
	printf("Geben Sie die Zahl a ein \n");
	scanf("%lf",&a);
	printf("Geben Sie die Zahl b ein \n");
	scanf("%lf",&b);
	printf("Geben Sie die Zahl c ein \n");
	scanf("%lf",&c);
	double w = b*b - 4*a*c;
	printf("Wert w = %lf \n",w);
	//Wert w wird nur zum debugging ausgegeben.
	if (w >= 0)
	{
		x1 = (-b + sqrt(w))/(2*a);
		x2 = (-b - sqrt(w))/(2*a);
		printf("X1 =  %lf \n X2 = %lf",x1,x2);
	}
	else 
	{
		printf("Es gibt keine Loesung!");
	}
	
	return 0;
}
