#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("AND operation of %d and %d is %d\n",a,b,a&b);
    printf("OR operation of %d and %d is %d\n",a,b,a|b);
    printf("XOR operation of %d and %d is %d\n",a,b,a^b);
    printf("NOT operation of %d is %d\n",a,~a);
    printf("NOT operation of %d is %d\n",b,~b);
    printf("Left shift operation of %d is %d\n",a,a<<1);
    printf("Right shift operation of %d is %d\n",a,a>>1);
    printf("Left shift operation of %d is %d\n",b,b<<1);
    printf("Right shift operation of %d is %d\n",b,b>>1);
    return 0;
}