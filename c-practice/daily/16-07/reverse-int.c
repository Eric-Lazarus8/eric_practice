#include<stdio.h>

int main()
{
	int n,res=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<4;i++)
	{
		res = res<<1;
		res |= (n&1);
		n >>= 1;
	}
	printf("%d\n",res);
	return 0;
}
