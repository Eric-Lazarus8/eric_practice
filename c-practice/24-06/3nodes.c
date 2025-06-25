#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node*next;
};
int main()
{
// Giving memory to three nodes
	struct Node* head = malloc(sizeof(struct Node));
        struct Node* second = malloc(sizeof(struct Node));
        struct Node* third = malloc(sizeof(struct Node));
//Assigning value to nodes
        head -> data = 10;
	head -> next = second;

	second -> data = 20;
	second -> next = third;

	third -> data = 30;
	third -> next = NULL;

struct Node* current = head;
while(current != NULL)
{
	printf("%d -> ",current -> data);
        current = current -> next;
}
printf("NULL\n");

free(head);
free(second);
free(third);
return 0;

}
