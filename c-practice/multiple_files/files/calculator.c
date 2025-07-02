#include<stdio.h>

#include"calculator.h"

int main()
{
		int a,b;
		printf("enter the a and b:");
		scanf("%d",&a,&b);
		printf("Add: %d\n", add(a, b));
                printf("Sub: %d\n", sub(a, b));
                printf("Mul: %d\n", mul(a, b));
                printf("Div: %.2f\n", divide(a, b));
                printf("Is %d Prime? %s\n", a, is_prime(a) ? "Yes" : "No");
                printf("Fibonacci(5): ");
                fibonacci(5);
return 0;
}
