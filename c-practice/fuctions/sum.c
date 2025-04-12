#include<stdio.h>
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int main()
{
    int total;
    printf("enter two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    total=sum(a,b);
    printf("sum of %d and %d is %d\n",a,b,total);
    return 0;
}