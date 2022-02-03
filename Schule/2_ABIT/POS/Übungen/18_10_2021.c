#include <stdio.h>

int main (){
	int a = 3;
	float b = 10.0;
	printf("a = %.1f, b = %.1f\n", a, b);
	printf("a = %.1f, b = %.1f\n", (float) a, b);
	printf("a*b = %d\n", a*b);
	printf("a*b = %d\n", a*(int) b);
	return 0;
}
