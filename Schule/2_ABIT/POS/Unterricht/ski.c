#include <stdio.h>
#include <math.h>
#define K 60

float WeitenPunkte(float a);
float HaltungsPunkte();
int main()
{
	float noten[5];
	float sprungweite;
	// Eingabe der Weite
	printf("Sprungweite:\n");
	scanf("%f",&sprungweite);
	float P1 = WeitenPunkte(sprungweite);
	//float P2 = HaltungsPunkte();
    printf("Weitenpunkte %f\n",P1);
	return 0;
};


float WeitenPunkte(float a)
{
	float punktzahl = K +(a-120)*1.8;
	return punktzahl;
};
