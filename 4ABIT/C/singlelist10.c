/**
 * \brief: A single linked list
 * \details: The 9th refinement includes
             - adding the function sortlist which sorts the list in ascending or descending order
 * \author: Lothar Schäfer
 * \date: 2022-11-08
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definition of the data structure of a node.
// The payload in this case is a text.
struct node {
	char* text;
	struct node* next;	
};

// The definition of the new datatype.
typedef struct node node_t;

// A function to create a new node.
// The function requires the text.
// The function will return a pointer to the new node.
node_t* createNode(char* text)
{
	node_t* node = malloc(sizeof(node_t));
	if (NULL == node) {
		printf("malloc failed for node %s!\n", text);
		return NULL;
	}
	node->text = text;
	node->next = NULL;
	return node;
}

// A function to insert a new node before the head of the list.
// The function requires the pointer to the head of the list and the text of the new node.
void insertHead(node_t** head, char* text)
{
	node_t* newHead = createNode(text);
	newHead->next = *head;
	*head = newHead;	
}

// A function to insert a new node after the tail of the list.
// The function requires the pointer to the head of the list and the text of the new node.
void insertTail(node_t** head, char* text)
{	
	node_t* newTail = createNode(text);
// The list contains no nodes
// The new tail becomes the new head
	if (*head == NULL)
	{
		*head = newTail;
	}
// The list contains nodes
// Loop to the tail of the list and append the new tail there
	else
	{
		node_t* tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newTail;	
	}
}

// A function to find a node in the list.
// The function requires the pointer to the head of the list and the text of the new node.
// The function returns the pointer to that node.
node_t* findNode(node_t* head, char* text)
{
	node_t* current = head;
	while (current != NULL && strcmp(current->text, text) != 0)
	{
		current = current->next;
	}

	if (current == NULL) {
		printf("Node %s not found.\n", text);
	} else {
		printf("Node %s found.\n", text);
	}
	
	return current;
}

// A function that deletes a node in the list.
// The function requires the pointer to the pointer of the head of the list and the text of the node to be removed.
void deleteNode(node_t** head, char* text)
{
	node_t* previous = NULL;
	node_t* current = *head;	
	
// The head is the node that must be deleted 	
	if (current != NULL && strcmp(current->text, text) == 0)
	{
		*head = current->next;
		free(current);
		return;
	}

// Loop through the list until the end is reached or the searched value is found
	while (current != NULL && strcmp(current->text, text) != 0)
	{
		previous = current;
		current = current->next;		
	}

// The node is not in the list
	if (current == NULL)
	{
		printf("Node %s not found. Cannot delete node.\n", text);
		return;
	}

// The node is in the list
// Delete the node
	previous->next = current->next;
	free(current);
	printf("Node %s deleted.\n", text);
}

// A function to sort the list
// The function requires the pointer to the head of the list and the sort order.
// For ascending oder use 1, for descending order use -1
void sortlist(node_t* head, int order)
{	
	node_t* current = head;
	node_t* final = NULL;
	char* text;
	while (current->next != final)
	{
		while (current->next != final)
		{
			if (strcmp(current->text, current->next->text) == order) {
				text = current->text;
				current->text = current->next->text;
				current->next->text = text;
			}
			current = current->next;
		}
		final = current;
		current = head;
	}
}

// A function to print the single linked list.
// The function requires the pointer to the head node of the list.
void printlist(node_t* head)
{
	node_t* current = head;
	while (current != NULL)
	{
		printf("%s -> ", current->text);
		current = current->next;
	}
	printf("\n");
}

int main()
{
// Creating a pointer to the head of the list
// This pointer MUST be set to NULL to work properly
	node_t* head = NULL;
	
// Insert nodes into the list
	insertTail(&head, "Detlev");
	insertHead(&head, "Berti");
	insertTail(&head, "Conny");
	insertHead(&head, "Anton");
	insertTail(&head, "Edi");

// Print the list
	printlist(head);

// Find a node in the list
	findNode(head, "Conny");
	findNode(head, "Condy");	

// Delete nodes
	deleteNode(&head, "Conny");
	printlist(head);
	deleteNode(&head, "Condy");

// Sort the list in ascending order (1)
	sortlist(head, 1);
	printlist(head);
	
// Sort the list in descending order (-1)
	sortlist(head, -1);
	printlist(head);

	return EXIT_SUCCESS;
}
