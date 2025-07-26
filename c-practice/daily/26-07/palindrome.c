#include<stdio.h>
int main()
{
	int n,m,rev=0,s;
	printf("enter the number \n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		s=n%10;
		rev=rev*10+s;
		n=n/10;
	}
	if(m==rev)
	{
		printf(" it is a palindrome \n");
	}
	else
	{
		printf("not a palindrome \n");
	}
	return 0;
}

