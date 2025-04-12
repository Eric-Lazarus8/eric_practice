#include<stdio.h>
int swap(int a,int b)
{
    a= a^b;
    b=b^a;
    a=a^b;
    printf("swap of a and b : %d and  %d\n",a,b);
    return a,b;
}
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a = %d and b = %d\n",a,b);
    swap(a,b);
    //printf("after swapping a =%d and b =%d\n",a,b);
    return 0;
}