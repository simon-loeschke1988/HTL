#include <stdio.h>
#include <stdlib.h>

//void helloworld();

//Variablen

int i;

int main ()
{
    int size;
           
    printf("Geben Sie eine Zahl fuer size ein: \n");
    scanf("%d",&size);
    printf("size: %d\n",size);
    printf("Wird dem Array uebergeben.\n");

    int a[size];
    printf("Der Array hat %d Elemente.\n",sizeof(a));
    printf("%d\n",a[size]);


 
    return 0;
}

/*
void helloworld(){

    printf("Hello World!");
}
*/