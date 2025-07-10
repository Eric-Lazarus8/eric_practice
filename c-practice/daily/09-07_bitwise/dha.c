#include<stdio.h>
#include<stdlib.h>
int data;
struct Node* next;

struct list* temp = NULL;
temp (struct list*) malloc (sizeof(struct list));
if(temp !=NULL)
{
	temp-> data = 1;
	temp-> next = NULL;

}
if(head == NULL)
{
	head = tail = temp;
	tail = temp;
}
for(struct list *t = head ; t! = NULL;t = t->next)
{
	printf("->%d",t->data);
	printf("\n");
	return 0;
}
