#include <stdio.h>
#include <stdlib.h>

//void helloworld();

//Variablen

int i;

int main ()
{
    int a;
    double b;
    long int c;
    long double d;           
    char e;
    float f;
    short g;
    

    
    printf("Groesse int: %ld \n",sizeof(a));
    printf("Groesse double: %ld \n",sizeof(b));
    printf("Groesse long int: %ld \n",sizeof(c));
    printf("Groesse long double: %ld \n",sizeof(d));
    printf("Groesse char: %ld \n",sizeof(e));
    printf("Groesse float: %ld \n",sizeof(f));
    printf("Groesse short: %ld \n",sizeof(g));
    return 0;
}

/*
void helloworld(){

    printf("Hello World!");
}
*/