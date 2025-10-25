#include <stdio.h>

// Declare functions from other files
int add(int, int);
int subb(int, int);
int mul(int, int);
int divide(int, int);


int main() {
	int x;
    int choice, a, b, num;

    while (1) {
        printf("\nChoose Operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", add(a, b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", subb(a, b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", mul(a, b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", divide(a, b));
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

