#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the upper limit:");
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum += i;
	}
	printf("sum of natural numbers:%d\n",sum);
	return 0;
}
