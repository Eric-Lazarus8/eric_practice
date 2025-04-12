#include<stdio.h>
int main()
{
    int a,b,*p1=&a,*p2=&b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(*p1>*p2)
    {
        printf("%d is max\n",*p1);
    }else if(*p1<*p2)
    {
        printf("%d is max\n",*p2);
    }else{
        printf("both are equal\n");
    }
    return 0;
}