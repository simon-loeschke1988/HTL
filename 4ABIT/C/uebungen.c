#include <stdio.h>
#include <stdlib.h>

struct node  
{
		int value;
		struct node *next;
		
};

typedef struct node node_t;

void createNode(int value)
{
	node_t *newNode = malloc(sizeof(node_t));
	
	if (newNode == NULL)
	{
		printf("Es ist kein freier Speicher verfügbar!\n");
		
	};
	newNode -> value = value;
	newNode -> next = NULL;
	printf("Neuer Knoten mit dem Wert %d erstellt.\n",newNode ->value);
};

void deleteNode(int value)
{
	
};


int main()
{
	createNode(4);
	return EXIT_SUCCESS;
}
