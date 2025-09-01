#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n&1)
	{
		printf("number is set:%d\n",n);
	}else
		printf("number is reset:%d\n",n);
}
