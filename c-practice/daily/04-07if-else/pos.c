#include<stdio.h>
int main()
{
	int num;
	printf("enter number to check positive/negative/zero:");
	scanf("%d",&num);

	if(num >0)
	{
		printf("given number is positive number\n");
	}else if(num < 0)
	{
		printf("given number is negative number\n");
	}else if(num == 0)
	{
		printf("given number is \"Zero\"\n");
	}
	return 0;

}
