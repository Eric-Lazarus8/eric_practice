#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
int main() {
    struct Node *head=malloc(sizeof(struct Node));
    head->data=10; head->next=NULL;
    struct Node *second=malloc(sizeof(struct Node));
    second->data=20; second->next=NULL;
    head->next=second;
    struct Node *t=head;
    while(t){printf("%d\n",t->data);t=t->next;}
    return 0;
}

