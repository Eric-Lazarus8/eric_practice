#include<stdio.h>
void check_bits(int n,int p1,int p2)
{
	int mask;
	n=n&(1<<p1)|(1<<p2);
	if(n&mask == mask)
	{
		printf("bit position are set\n");
	}else{
printf("bit position are not set\n");	}
}
int main()
{
	int n,p1,p2,mask;
	printf("enter the number,pos1,pos2\n");
	scanf("%d%d%d",&n,&p1,&p2);
	check_bits(n,p2,p2);
	return 0;
}
