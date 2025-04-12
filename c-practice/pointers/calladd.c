#include<stdio.h>
int addtwo(int *a,int*b)
{
    int sum;
    sum=*a+*b;
    return sum;
}
int main()
{
    int a,b,sum;
    printf("first number:\n");
    scanf("%d",&a);
    printf("second number:\n");
    scanf("%d",&b);
    sum=addtwo(&a,&b);
    printf("sum two number:%d\n\n",sum);
    return 0;
}   