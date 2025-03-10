#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a and b :");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("small number is%d :",a);
	}else if (a>b)
	{
		printf("small number is %d:",b);
	}
	else
	{
		printf("both are equal ");
	}
	return 0;
}
