#include<stdio.h>
int is_prime(int n)
{
	if(n<=1)
	{
		return 0;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int result = is_prime(n);

	if(result==1)
	{
		printf("it is prime number\n");
	}else{
		printf("it is not prime number\n");
	}
}
