#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i = 0;i<=n;i++)
	{
		if(n&(1<<i))
		{
		count++;
		}
	}
	printf("set bits: %d\n",count);
	return 0;
}
