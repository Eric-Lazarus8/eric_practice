#include<stdio.h>
int reset_bit(int n,int k)
{
	return n& ~(1<<k);
}
int main()
{
	int n,k;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the bit position to reset:");
	scanf("%d",&k);
int	result =reset_bit(n,k);
	printf("number before resetting: %d\n",n);
	printf("after resetting: %d\n",result);
}
