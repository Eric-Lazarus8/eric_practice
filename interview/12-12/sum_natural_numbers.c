#include<stdio.h>
int sum(int n)
{
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}

int main()
{
	int num,res;
	printf("enter number");
	scanf("%d",&num);
	res = sum(num);
	printf("%d\n",res);
	return 0;
}

