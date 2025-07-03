#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node* next;
};

int main()
{
	int n,i;
	printf("enter no. of nodes:");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("linked list should contain more than 1\n");
		return 1;
	}
	struct node *head = NULL,*temp = NULL,*newnode = NULL;

	for (i=0;i<n;i++)
{
	newnode = (struct node*) malloc (sizeof(struct node));
		if(newnode == NULL)
		{
			printf("memory allocation failed\n");
			return 1;
		}

	printf("enter data for node %d: ",i+1);
	scanf(" %c",&newnode->data);
	newnode -> next = NULL;
	if (head == NULL)
	{
		head = newnode;
		temp = head;
	}
	else
	{
		temp -> next = newnode;
		temp = temp -> next;
	}
}
	temp = head;
	while(temp != NULL)
	{
		printf("%c->",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");

	temp = head;
	while (temp != NULL)
{
	struct node* next = temp -> next;
	free(temp);
	temp = next;
}
return 0;


}
