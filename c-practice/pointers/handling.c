#include<stdio.h>
int main()
{
    int *ptr;
    int a;
    a=8;
    printf("adress of a is %p\n",&a);
    printf("value of a is %d\n",a);    
    ptr=&a;
    printf("address of ptr is %p\n",&ptr);
    printf("value of ptr is %d\n",ptr);
    a=4;
    printf("address of a is %p\n",&a);
    printf("value of a is %d\n",a);
    printf("address of ptr is %p\n",&ptr);
    printf("value of ptr is %d\n",ptr);
    printf("value of a is %d\n",*ptr);
    printf("value of ptr is %d\n",*ptr);
    printf("address of a is %p\n",&a);
    printf("address of ptr is %p\n",&ptr);
}