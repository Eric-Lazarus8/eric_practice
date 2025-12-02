#include<stdio.h>

int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	for(int i=8-1;i>=0;i--)
	{
		if(num&(1<<i))
		printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}
