#include <stdio.h>
#include <math.h>

// Schleifen
int main()
{
	// es gibt mehrere Schleifen in C
	/* For Schleifen, wenn man von vornherein weiﬂ, wie oft man etwas ausgeben will,
	nimmt man die For schleifen, sonst die while, oder do-while schleife */

	int i;

	for (i=1;i<=10;i++)
	{
		printf("\n%d\t%d\t%f",i,i*i,sqrt(i));
	}
	return 0;
}
