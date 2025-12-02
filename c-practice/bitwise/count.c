#include<stdio.h>
int count_set(int n)
{
	int count=0;
	for(int i=sizeof(n)*8-1;i>=0;i--)
	{
	if(n&(1<<i))
		{
			count++;
		}

	}
	return count;

}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int res = count_set(n);
	printf("%d\n",res);
	return 0;
}

