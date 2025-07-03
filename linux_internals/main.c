#include<stdio.h>
#include"main.h"
int main()
{
                int a,b;
                printf("enter the a and b:");
                scanf("%d %d",&a,&b);
                printf("Add: %d\n", add(a, b));
                printf("Sub: %d\n", subb(a, b));
                printf("Mul: %d\n", mul(a, b));
                printf("Div: %.2f\n", div(a, b));
return 0;
}

