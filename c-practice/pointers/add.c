#include<stdio.h>
int main()
{
    int a,b;
    int  *p1,*p2;
    printf("first number:\n");
    scanf("%d",&a);
    printf("second number:\n");
    scanf("%d",&b);
    p1 =&a;
    p2 = &b;
    int sum = *p1 + *p2;
    printf("sum two number:%d\n\n",sum);
    return 0;
}