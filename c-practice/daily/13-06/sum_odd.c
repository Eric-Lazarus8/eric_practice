#include<stdio.h>
int main()
{
	int i,n;
	printf("enter upper limit:");
	scanf("%d",&n);
	int sum =0;
	for (i=0;i<n;i++)
	{
		if(i%2==1)
		{
			sum += i;
		}
	}
	printf("sum of odd number:%d\n",sum);
	return 0;
}

