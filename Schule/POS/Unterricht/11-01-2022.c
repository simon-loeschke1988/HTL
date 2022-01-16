#include <stdio.h>

//Sortierung

void bubblesort(int a[], int size);
int main()
{
    int b[10000];
    bubblesort(b, 12);
    return 0;
}

void bubblesort(int a[], int size)
{


    int i, j, z;
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size - j - 1; i++)
        {
            if (a[i])>a[i+1])
                {
                    z = a[i];
                    a[i] = a[i + 1];
                    a[i + i] = z;
                };
        };
    };
}
