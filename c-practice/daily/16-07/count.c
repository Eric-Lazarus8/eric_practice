#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(n&(1<<i))
		count++;
	}
	printf("no of set-bits in a number:%d\n",count);
	return 0;
}
