#include <stdio.h>
#include <stdlib.h>


struct node 
{
    int value;
    struct node* next;
};

typedef struct node node_t;

// Wichtig: node_t* Zeiger erstellen!
node_t* create_node(int value)
{
    node_t* newNode = malloc(sizeof(node_t));

    if (newNode == NULL)
    {
        printf("Fehler, kein Speicherplatz vorhanden, Knotenerstellung abgebrochen!\n");
        return NULL; 
    };
    newNode -> value = value;
    newNode -> next = NULL;
    printf("\n Neuer Knoten mit dem Wert %d erstellt.", newNode->value);
};

//Liste drucken
void printNodes(node_t* head)
{
    node_t* current = head;
    printf("%d ->", current -> value);
    current = current ->next;
};

node_t* addNodes(node_t** head, int value)
{
    node_t* current = *head;
    while (current->next !=NULL)
    {
        current = current ->next;
        if (current -> next == NULL)
        {
            node_t* newHead = create_node(value);
            newHead -> next = current;
            return newHead;
        }
    };
};


int main ()
{
    node_t* neuer_knoten = create_node(4);
    node_t* new = addNodes(&neuer_knoten,5);
    printNodes(new);
    return EXIT_SUCCESS;
}