#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{	
	int n,i;
	printf("enter No of nodes:\n");
	scanf("%d",&n);
	struct node *head = NULL, *temp = NULL, *newnode = NULL;
    //creating
	for(i=1;i<=n;i++)
	{
		newnode = (struct node*) malloc(sizeof(struct node));
		newnode->data = i;
		newnode->next = NULL;

		if(head == NULL)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = temp->next;
		}


	}
	temp = head;
	while(temp!=NUL0L)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	return 0;

}
