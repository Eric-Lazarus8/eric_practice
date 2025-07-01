#include <stdio.h>
#include <stdlib.h>

struct node
{
	char name;
	struct node* next;
};

int main()
{
	struct node* head = malloc(sizeof(struct node));
	struct node* second = malloc(sizeof(struct node));
	struct node* third = malloc(sizeof(struct node));

	head -> name = 'D';
	head -> next = second;

	second -> name = 'Z';
	second -> next = third;

	third -> name = 'O';
	third -> next = NULL;

	struct node* current = head;
	while(current !=NULL)
	{
		printf("%c -> ",current -> name);
		current = current -> next;
	}

	printf("NULL\n");
	free(head);
	free(second);
	free(third);
	return 0;

        	
}

