#include <stdio.h>
#include <stdlib.h>


//Erstellen Sie eine Datenstruktur, die 
struct Mitarbeiter 
{
	int ma_nummer;
	char* ma_vorname;
	char* ma_nachname;
	struct Mitarbeiter *next;
};

typedef struct Mitarbeiter mitarbeiter_t;

mitarbeiter_t* createMA(int ma_nummer, char* ma_vorname, char* ma_nachname) 
{
	mitarbeiter_t *neuerMA = malloc(sizeof(mitarbeiter_t));
	
	if (neuerMA == NULL)
	{
		printf("Nicht genuegend Speicher vorhanden.\n");
	};
	
	neuerMA -> ma_nummer = ma_nummer;
	neuerMA -> ma_vorname = ma_vorname;
	neuerMA -> ma_nachname = ma_nachname;
	neuerMA -> next = NULL;
	printf("Neuer Mitarbeiter %s, %s mit der MA-Nummer %d erstellt.\n",
	neuerMA->ma_nachname, neuerMA->ma_vorname, neuerMA->ma_nummer);
	return neuerMA;

};

mitarbeiter_t* insertHead(mitarbeiter_t** head,int nummer, char* text, char* text2)
{
	mitarbeiter_t* newHead = createMA(nummer,text,text2);
	newHead->next = *head;
	*head = newHead;
	return newHead;	
};

void deleteMA(mitarbeiter_t** head, int nummer)
{
	mitarbeiter_t* prev = NULL;
	mitarbeiter_t* current = *head;
	if (current != NULL && current -> ma_nummer == nummer)
	{
		
		*head = current -> next;
		free(current);
		printf("Mitarbeiter gelöscht\n");
		//printf("Liste beginnt mit %d",head.ma_nummer);
		return;
	};
	while (current != NULL && current -> ma_nummer != nummer)
	{
		prev = current;
		current = current -> next;
	};
	if (current == NULL)
	{
		printf("Node %d not found. Cannot delete node.\n", nummer);
		return;
	};
	
};


int main ()
{
	/*char* ma_name;
	char* ma_vname;
	printf("Wie ist der Nachname?\n");
	scanf("%s",&ma_name);
	printf("Wie ist der Vorname?\n");
	scanf("%s",&ma_vname);*/
	
	mitarbeiter_t* MA= NULL;
	mitarbeiter_t* MA1 = insertHead(&MA,1,"Test","test2");
	mitarbeiter_t* MA12 = insertHead(&MA1,12,"Test3","test4");
	printf("Mitarbeiter löschen: geben Sie eine Mitarbeiternummer ein!\n");
	int nummer;
	scanf("%d",&nummer);
	deleteMA(&MA1,nummer);
	
	
	return EXIT_SUCCESS;
};
