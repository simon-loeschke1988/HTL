#include <stdio.h>
#include <stdlib.h>
#define LENTH 10000

/* Hier werden Arrays geübt, zur Vorbereitung auf die Schularbeit */

int Array[LENTH];

int main()
{
    for (int i = 0; i < 99; i++)
    {
        Array[i] = i * 2;
        printf("Array[%d] = %d\n", i, Array[i]);
    }
    return 0;
}
