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
	struct node *head = NULL,*temp = NULL,*new_node = NULL; 
	for(i=1;i<=n;i++)
	{
		new_node = (struct node*) malloc (sizeof(struct node));
		if(new_node == NULL)
		{
			printf("Memory allocation failed.\n");
			exit(1);
		}
		printf("Enter value to store in node %d: ",i);
		scanf("%d",&value);
		new_node -> data = value;
		new_node->next = NULL;

		if (head == NULL)
		{
			head = new_node;
			temp = head;
		}
		else
		{
			temp -> next = new_node;
			temp = temp -> next;
		}
	}
	return head;
}

void printlist(struct node* head)
{
	struct node *temp = head;
    if (temp == NULL) {
        printf("\nList is empty.\n\n");
        return;
    }
	printf("\nCurrent List: ");
	while(temp != NULL)
	{
		printf(" %d ->",temp->data);
		temp = temp -> next;
	}
	printf(" NULL\n\n");
}

struct node* insertAtBeginning(struct node* head, int value)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    
    new_node->data = value;
    new_node->next = head;
    head = new_node;
    
    return head;
}

struct node* insertAtEnd(struct node* head, int value)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    
    new_node->data = value;
    new_node->next = NULL;
    
    if (head == NULL)
    {
        head = new_node;
        return head;
    }
    
    struct node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = new_node;
    
    return head;
}

struct node* insertAtPosition(struct node* head, int value, int position)
{
    int i;
    struct node* new_node = NULL;
    struct node* temp = head;

    if (position == 1) {
        head = insertAtBeginning(head, value);
        return head;
    }

    for (i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position. Position is out of bounds.\n");
            return head;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position. Position is out of bounds.\n");
        return head;
    }

    new_node = (struct node*) malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }
    new_node->data = value;

    new_node->next = temp->next;
    temp->next = new_node;

    return head;
}

int main()
{
	int n, value, choice, position;
	struct node *head = NULL;
	
    while(1)
    {
        printf("--- LINKED LIST MENU ---\n");
        printf("1. Create a new list\n");
		printf("2. Insert at the Beginning\n");
		printf("3. Insert at the End\n");
        printf("4. Insert at a Specific Position\n");
		printf("5. Print the List\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the number of nodes for the new list: ");
                scanf("%d", &n);
                head = creation(n);
                printlist(head);
                break;
            case 2:
                printf("Enter a value to insert: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                printlist(head);
                break;
            case 3:
                printf("Enter a value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                printlist(head);
                break;
            case 4:
                printf("Enter a value to insert: ");
                scanf("%d", &value);
                printf("Enter the position to insert at (starts from 1): ");
                scanf("%d", &position);
                if (position < 1) {
                    printf("Invalid position. Position must be 1 or greater.\n");
                } else {
                    head = insertAtPosition(head, value, position);
                }
                printlist(head);
                break;
            case 5:
                printlist(head);
                break;
            case 6:
                printf("Exiting program.\n");
                while(head != NULL) {
                    struct node* temp = head;
                    head = head->next;
                    free(temp);
                }
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }
	
	return 0;
}

