// Binary search tree

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* left;
	struct node* right;	
};

typedef struct node node_t;

node_t* createNode(int value)
{
	node_t* newNode = malloc(sizeof(node_t));
	if (NULL == newNode) {
		printf("malloc failed for node %d!\n");
		return NULL;
	}
	newNode->value = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;	
}

// A function to print a number of tabs
void printtabs(int num)
{
	int i;
	for (i = 0; i <= num; i++)
	{
		printf("\t");
	}
}

void printtree_rec(node_t* root, int level)
{
// base case(s)
	if (root == NULL)
	{
		printf("NULL\n");
		return; 
	}
	
	printf("%d\n", root->value);

	printtabs(level);
	printf("left [%d]: ", level+1);
	printtree_rec(root->left, level+1);
	
	printtabs(level);
	printf("right[%d]: ", level+1);
	printtree_rec(root->right, level+1);	
}

void printtree(node_t* root) {
	printf("root[0]: ");
	printtree_rec(root, 0);	
}

int addNode(node_t** root, int value)
{
	node_t* node = *root;

// Base case(s)	
	if (node == NULL)
	{
		*root = createNode(value);
		if (NULL == *root) {
			return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
	}
	
	if (value == node->value) {
		printf("duplicate node %d!", value);
		return EXIT_FAILURE;
	}
	
	if (value < node->value) {
		return addNode(&(node->left), value);
	} else {
		return addNode(&(node->right), value);
	}
		
}

int main()
{
// Creating a pointer to the root of the tree
// This pointer MUST be set to NULL to work properly
	node_t* root = NULL;
	
// Creating the nodes
	addNode(&root, 10);
	addNode(&root, 19);
	addNode(&root, 16);
	addNode(&root, 5);
	addNode(&root, 12);

// Print the tree data structure
	printtree(root);
	
	return EXIT_SUCCESS;
}


