#include <stdio.h>
#include <math.h>

// Schleifen
int main()
{
	// es gibt mehrere Schleifen in C
	/* For Schleifen, wenn man von vornherein weiﬂ, wie oft man etwas ausgeben will,
	nimmt man die For schleifen, sonst die while, oder do-while schleife */

	double sum = 0.0;
	double x;
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Eingabe x:\n");
		scanf("%lf",&x);
		sum= sum + x;
	}
	
	printf("x:\t%lf",sum);
	return 0;	
}

