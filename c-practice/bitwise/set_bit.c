#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)&1==1){
			count++;
			printf("%d %d\n",i,count);
		}
		//printf("no of set bits are : %d",count);
	}
	printf("no of set bits in number %d is : %d\n",n,count);
}
