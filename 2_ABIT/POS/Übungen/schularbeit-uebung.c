#include <stdio.h>
#include <math.h>


void ende();

int main ()
{
    ende();
    return 0;
}

void ende(){
    char c;
    int quit = 0;
    while (!quit) 
    {
        c = getchar();
        switch (c)
        {
        case 'x':
        case 'X':
            quit = 1;
            break;
        
        default:
            printf("Beenden Sie das programm mit X!\n");
        }
    }
}