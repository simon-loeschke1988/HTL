#include <math.h>
#include <stdio.h>

int quit = 0;

//Funktionsdefinitionen


void programmende();
void welcome();
int kassiervorgang();

int main ()
{
    programmende();
    return 0;
}

void welcome()
{
    printf("*********************\n");
    printf("** KASSENPROGRAMM ***\n");
    printf("*********************\n");
    printf("\n\n");
    printf("Hinweis: Sie können das Programm jederzeit mit der Taste x beenden. \n");
    printf("Zum Starten des kassiervorgangs druecken Sie die 1.\n");
}

void programmende()
{
    welcome();
    
    while (!quit)
    {
        char c = getchar();
        switch (c)
            {
            case 'x':
            case 'X':
                quit = 1;
                break;
            case 'a':
                kassiervorgang();
                continue;
        
            default:
                printf("Geben Sie einen richtigen Wert ein, oder Beenden Sie das Programm mit x!\n1");
                continue;
            
        }
    }
    
}

int kassiervorgang()
{
    enum Menue {
        Burger,
        Cola,
        Pommes,
        Wasser
    };

    printf("Sie haben den Kassiervorgang gestartet.");
    return 0;
}

