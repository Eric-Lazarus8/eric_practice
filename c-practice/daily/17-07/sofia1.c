#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Corrected: Add return statement
struct node *newnode(int data) {
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;  // ✅ important
}

int main() {
    int n, value;
    struct node *temp = NULL, *head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct node *new = newnode(value);

        if (head == NULL) {
            head = temp = new;
        } else {
            temp->next = new;
            temp = temp->next;
        }
    }

    // Insert at beginning
    printf("Enter value to be inserted at beginning: ");
    scanf("%d", &value);
    struct node *newhead = newnode(value);
    newhead->next = head;
    head = newhead;  // ✅ assign newhead to head

    // Print linked list
    printf("Linked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

