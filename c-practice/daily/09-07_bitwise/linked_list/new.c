#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node* next;
};
int main()
{
	int i;
	struct node *head = NULL,*temp = NULL, *newnode = NULL;

	for(i=1;i<5;i++)
	{
		newnode = (struct node*) malloc(sizeof(struct node));
		newnode->data=i;
		newnode->next=NULL;

		if(head == NULL)
		{
			head = newnode;
			temp = head;
		}else
		{
			temp->next = newnode;
			temp = temp->next;
		}
	}
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data=0;
	newnode->next=head;
        head = newnode;
temp = head;	
	while(temp != NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	return 0;
}
