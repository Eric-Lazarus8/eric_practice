#include<stdio.h>
int set(int n,int k)
{
	return n&(1<<k);
}
int main()
{
	int n,k;
	printf("enter num and pos:");
	scanf("%d %d",&n,&k);
	int res=set(n,k);
	if(res)
		printf("bit is set\n");
	else
		printf("bit is not set\n");
	return 0;
}
