#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;

};
struct node* newnode(int data)
{
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp -> data = data;
       temp -> next = NULL;	
       return temp;
}

int main()
{
	int  n,data;
	struct node* temp= NULL;
	struct node* head=NULL;
	printf("enter No of Nodes:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("enter the data in the node %d:",i+1);
	scanf("%d",&data);
        struct node* node=  newnode(data);	
		if(head == NULL)
		{
		head = temp = node;}
		else{
			temp-> next = node;
			temp = node;
		}
	}

struct node* abc = head;
	while(abc != NULL)
	{
		printf("%d->",abc->data);
		abc = abc->next;
	}
	printf("NULL\n");
	return 0;
}
