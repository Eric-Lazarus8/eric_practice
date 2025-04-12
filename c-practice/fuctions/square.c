#include<stdio.h>
int square(int a)
{
    int s;
    s=a*a;
    return s;
}
int main()
{
    int result;
    printf("enter a number\n");
    int a;
    scanf("%d",&a);
    result=square(a);
    printf("square of %d is %d\n",a,result);
return 0;
}