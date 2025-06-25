#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	char name[20];
	struct node* next;
};

int main()
{
	struct node* head = malloc(sizeof(struct node));
	struct node* second = malloc(sizeof(struct node));
	struct node* third  = malloc(sizeof(struct node));

	strcpy(head -> name,"DZO ");
	head -> next = second;

	strcpy(second -> name,"ERIC ");
	second -> next = third;

	strcpy(third -> name ,	"<3");
	third -> next = NULL;

	struct node* current = head;
	while(current != NULL)
	{
		printf("%s",current -> name);
		current = current -> next;
	}
	printf("\n");
	free(head);
	free(second);
	free(third);
	return 0;
}


