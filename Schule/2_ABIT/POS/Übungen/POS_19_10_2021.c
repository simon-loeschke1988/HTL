#include <stdio.h>
int main()
{
	int i,x;
	double sum = 0.0;
	int anz=0;
	float mittelwert;
	printf("Wie viele Zahlen möchten Sie eingeben:  \n ");
	scanf("%d",&anz);
	for (i=0; i<=anz;i++)
	{
		printf("Geben Sie die Zahl x ein: \n");
		scanf("%d",&x);
		(float)x;
		sum = sum + x;
	}
	mittelwert = sum/anz;
	printf(" Die Summe ist %f \n",sum);
	printf("Der Mittelwert ist %f", mittelwert);
	return 0;
}


