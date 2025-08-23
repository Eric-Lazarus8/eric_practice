#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *newnode(int data)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp -> data = data;
	temp->next=NULL;
}
int main()
{
	int n,value;
	struct node *temp = NULL, *head = NULL;
	printf("enter no. of nodes:");
	scanf("%d",&n);
	for(int i=0; i<n ; i++)
	{
		printf("enter value for node %d:",i+1);
		scanf("%d",&value);
		struct node *new = newnode(value);
	
		if(head ==NULL)
		{	head = new = temp;
		}
		else
		{
			temp-> next = new;
			temp = temp->next;
		}
	
	}
		printf("enter value to be inserted:\n");
		scanf("%d",&value);
		struct node *newhead = newnode (value);
		newhead ->next = head;
		head = newhead;

		printf("linked list:");
		temp = head ;
		while (temp != NULL)
		{
			printf("%d-> ",temp->data);
			temp = temp->next;
		}
		printf("NULL\n");
}
