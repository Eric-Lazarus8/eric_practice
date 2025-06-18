#include<stdio.h>
int count_setbit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n-1);

		count++;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter the number to check no of setbits:\n");
	scanf("%d",&n);
	printf("No of setbits:%d\n",count_setbit(n)); 
}
