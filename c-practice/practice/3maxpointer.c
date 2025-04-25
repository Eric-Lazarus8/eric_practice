#include<stdio.h>
int max(int *a,int *b,int *c)
{
    if(*a>*b&&*a>*c)
    {
        return *a;
    }
    else if(*b>*a&&*b>*c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}
int main()
{
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int res = max(&a,&b,&c);
    printf("max of %d,%d and %d is %d\n",a,b,c,res);
    return 0;
}