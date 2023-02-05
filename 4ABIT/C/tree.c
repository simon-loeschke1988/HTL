/**
 * \author: Lothar Sch�fer
 * \date: 25.10.2022
 * \brief: Ein Bin�rbaum und dessen Methoden
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET 13
#define ESC 27
#define MAX 100

struct node {
	char* word;
	int count;
	struct node* left;
	struct node* right;
};

struct node* allocNode() {
	return malloc(sizeof(struct node));
}

struct node* addNode(struct node* p, char* word) {
	int condition;
	if (p == NULL) {
		p = allocNode();
		p->word = word;
		p->count = 1;
		p->left = NULL;
		p->right = NULL;
	} else if ((condition = strcmp(p->word, word)) == 0) {
		p->count++;
	} else if (condition < 0) {
		p->left = addNode(p->left, word);
	} else {
		p->right = addNode(p->right, word);
	}
	return p;
}

void printTree(struct node* p) {
	if (p != NULL)	{
		printTree(p->left);
		printf("%3d %s\n", p->count, p->word);
		printTree(p->right);
	}
}

/*int getWord(char* word) {
	char* w = word;
	char c;	
	int quit = 0;
	while (!quit) {		
		c = getch();
		switch (c) {
			case RET:
			case ESC:
				return EOF;
				break;
			case ' ':
				*w = '\0';
				quit = 1;
				break;
			default:
				printf("%c", c);
				*w++ = c;
		}
	}
	return word[0];
}*/

int main() {
	struct node* root = NULL;
	char word[MAX];
	root = addNode(root, "das");
	root = addNode(root, "ist");
	root = addNode(root, "das");
	printTree(root);	
/*
	while (getWord(word) != EOF)	{
		printf("%s\n", word);
		root = addNode(root, word);		

	}
*/
	return EXIT_SUCCESS;
}
