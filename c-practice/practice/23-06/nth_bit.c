#include<stdio.h>
int main()
{
	int n,p,check_bit;
	printf("enter the number and bit to check :");
	scanf("%d %d",&n,&p);
	check_bit = (n>>p)&1;
	printf("in the position :%d\n bit : %d \n",p,check_bit);
	return 0;

}

