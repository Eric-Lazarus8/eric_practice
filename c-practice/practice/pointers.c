#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int *p = &a;
    printf("%d\n",a);
    printf("%p\n",a);
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;

}