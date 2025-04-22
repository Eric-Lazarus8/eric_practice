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
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    if(prime(i)==0)
    {
        printf("%d ",i);
    }
    /*else{
        printf("%d not a prime number\n",i);
    }*/
printf("\n");
}