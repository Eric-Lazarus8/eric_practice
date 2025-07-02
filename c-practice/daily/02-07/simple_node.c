#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node* next;
};
int main()
{
	struct node* head = malloc(sizeof (struct node));
	struct node* second = malloc(sizeof(struct node));
	struct node* third = malloc(sizeof (struct node));

	head -> data = 'D';
	head -> next = second ;

	second -> data = 'Z';
	second -> next = third;

	third  -> data = 'O';
	third -> next = NULL;

	struct node* temp = head;
	while(temp != NULL)
	{
		printf("%c->",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");

	free(head);
	free(second);
	free(third);

	return 0;
}
