#include<stdio.h>
int resetbit_count(int n)
{
	int count =0;
	while (n)
	{
		n = n&(n-1);
		count++;
	}
	return 32-count;
}
int main()
{
	int n;
	printf("enter the number to check No of reset bits:\n");
	scanf("%d",&n);
	printf("No of reset bits:%d\n",resetbit_count(n));
}
