#include<stdio.h>
int bitcheck(int n,int k)
{
	return (n&(1<<k)) !=0;
}
int main()
{
	int n,k;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the bit to check:");
	scanf("%d",&k);
	if(bitcheck(n,k))
	{
		printf(" %d bit is set in the number %d ",k,n);
	}else{
		printf("%d bit is not set in the number %d",k,n);
	}printf("\n");
}
