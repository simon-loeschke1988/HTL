#include <stdio.h>
#include <stdlib.h>


//Datenstruktur wird erstellt: doppelt verkettete liste.

struct node
{
    int value;
    struct node *next;
    
};

typedef struct node node_t;

node_t createNode(int value)
{
    node_t *head = malloc(sizeof(node_t));

    if (head == NULL)
    {
        printf("Kein Speicherplatz vorhanden.");
        return EXIT_FAILURE;
    };
    head -> value = value;
    head -> next = NULL;
}


//Hauptfunktion

int main ()
{
    return EXIT_SUCCESS;
}


