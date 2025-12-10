#include<stdio.h>
#include<math.h>
int checkPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}

	}
	return 1;
}
int armstrong(int n)
{
	int temp =n;
	int t=n;
	int sum=0;
	int count=0;
	while(t!=0)
	{
		count++;
		t=t/10;
	}
	while(temp!=0)
	{
	int r = temp%10;
	int p = pow(r,count);
	sum += p ;
	temp=temp/10;
	}
	if(sum == n)
	{
		return 1;
	}
	return 0;
}
