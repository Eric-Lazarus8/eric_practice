#include<stdio.h>
int main()
{
	int  a,b;
	printf("enter the numbers to swap:\n");
	scanf("%d %d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("after swapping %d %d\n",a,b);
	return 0;
}
