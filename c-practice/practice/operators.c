//Problem: Implement a program that takes two numbers as input and performs addition, subtraction, multiplication, and division using a single function.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers to perform: ");
    scanf("%d %d",&a,&b);
    printf("add=%d,subb=%d,mul=%d,div=%d\n",a+b,a-b,a*b,a/b);
    return 0;
}
