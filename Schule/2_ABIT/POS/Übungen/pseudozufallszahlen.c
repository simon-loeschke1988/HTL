#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    int pzz;
    //initialisiert die Zufallszahl
    time_t t; 
    time (&t);
    srand((int) t);

    // Zufallszahl generieren
    
    
    pzz = rand();

    printf("Zufallszahl: %d\n",pzz);

    return 0;
}