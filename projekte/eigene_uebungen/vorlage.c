#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void WelcomeDisplay();
int UserInput();
int UserCalc(int a);

int main ()
{
    WelcomeDisplay();
    int input = UserInput();
    UserCalc(input);
    return 0;
}

void WelcomeDisplay()
{
    printf("++++++++++++++++++++++++++++++++++++++++++\n");
    printf("----------HERZLICH WILLKOMMMEN------------\n");
    printf("++++++++++++++++++++++++++++++++++++++++++\n\n\n");
}
int UserInput()
{
    int u_input;
    printf("Gib eine Zahl ein.\n\n");
    printf("Zahl:\n");
    scanf("%d",&u_input);
    return u_input;
}

int UserCalc(int a)
{
    int b = a*a;
    printf("a hoch a: %d \n\n\n",b);
    printf("\n\n");
    return b;
}