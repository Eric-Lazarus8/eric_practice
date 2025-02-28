#include<stdio.h>
int main()
{
 int a,n,bit ;
 printf("enter the value of a and bit\n");
scanf("%d%d",&a,&bit);
n |= a^(1<<bit);
printf("bit swap of %d in %d is %d\n",bit,a,n);
return 0;
}
