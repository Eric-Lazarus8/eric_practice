#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Values to swap :\n");
    scanf("%d %d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After swaping : %d %d\n",a,b);
    return 0;
}