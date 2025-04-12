#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    int *ptr;
    //*ptr=20;
    ptr=&a;
    *ptr=20;

    printf("address of a is %p\n",&a);
    printf("address of a is %p\n",ptr);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",*ptr);
  //  printf("value of a is %d\n",*ptr);
    printf("address of ptr is %p\n",&ptr);      
    return 0;
}