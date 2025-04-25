#include<stdio.h>
int max(int *a,int *b)
{
    if(*a>*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int max1=max(&a,&b);
    printf("max of %d and %d is %d\n",a,b,max1);
    return 0;
}