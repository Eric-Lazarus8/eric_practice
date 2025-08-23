#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* creation(int n)
{
	int i,value;
	struct node *head = NULL,*temp = NULL,*new = NULL;
	for(i=1;i<=n;i++)
	{
		new = (struct node*) malloc (sizeof(struct node));
		if(new == NULL)
		{
			printf("memory allocation failed.\n");
			exit(1);
		}
		printf("enter value to store in node %d:",i);
		scanf("%d",&value);
		new -> data = value;
		new->next = NULL;

		if (head == NULL)
		{
			head = new;
			temp = head;
		}
		else
		{
			temp -> next = new;
			temp = temp -> next;
		}

	}
	return head;
}

void printlist(struct node* head)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf(" %d ->",temp->data);
		temp = temp -> next;
	
	}
printf("NULL\n");
}
int main()
{
	int n;
	struct node *head = NULL;
	printf("enter no of nodes.\n");
	scanf("%d",&n);
	head = creation(n);
	printlist(head);
}
