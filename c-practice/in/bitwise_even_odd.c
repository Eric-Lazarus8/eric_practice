#include<stdio.h>
int odd(int n)
{
	return n&1;
}
int main()
{
	int n;
	printf("enter number:\n");
	scanf("%d",&n);
	int res = odd(n);
	if(res==1)
		printf("num is odd\n");
	else
		printf("num is even\n");
	return 0;
}
