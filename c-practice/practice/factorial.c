#include<stdio.h>
int fac(int n)
{
    int f=1; 
    while(n>0)
    {
  
    f = n*f;
       n--;
    }
    return f;
}
int main()
{
    int f,n;
    printf("enter the number:");
    scanf("%d",&n);
    int result = fac(n);
    printf("factorial of %d is %d\n",n,result);   
}