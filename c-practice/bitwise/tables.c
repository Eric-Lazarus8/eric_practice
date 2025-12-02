#include<stdio.h>

void print(int n)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
int main()
{
	int n;
	printf("which number  table you want:");
	scanf("%d",&n);
	print(n);
	return 0;
}
