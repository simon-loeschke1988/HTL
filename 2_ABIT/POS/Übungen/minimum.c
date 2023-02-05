#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



const int SIZE = 10;
int i, a[5];
int main ()
{
	int x;
	for(i=0;i<SIZE;i++){
	 a[i]= rand() % 21 -1;
	}
	for (i=0;i<SIZE;i++)
	{
		printf("%d \n",a[i]);
	}



