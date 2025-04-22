///Given number is prime  using loops and conditional statements
#include<stdio.h>
int prime(int n)
{
    int i,count =0;
    if(n<=1)
    {
         return 0;
    }
    for(i = 2;i <= n/2;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a;
    printf("enter the number to find prime or not:");
    scanf("%d",&a);
    if(prime(a)==0)
    {
        printf("is a prime number\n");
    }else{
        printf("not a prime number\n");
    }
printf("\n");
}