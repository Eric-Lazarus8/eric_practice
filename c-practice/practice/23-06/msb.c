#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int bits = sizeof(n)*8;
	int msb = 1<<(bits-1);
	if (n & msb)
	{
		printf("msb is set\n");
	}
	else
		printf("msb is not set\n");
}
