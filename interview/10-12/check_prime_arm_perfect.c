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
int check_perfect(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum += i;
		}
	}
		if(n==sum)
		{
			return 1;
		}else
			return 0;
	
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);

	if(checkPrime(n))
		printf("\"%d\"is prime number\n",n);
	else
		printf("\"%d\"is not prime number\n",n);
	 if(armstrong(n))
                printf("\"%d\" is armstrong number\n",n);
        else
                printf("\"%d\" is not armstrong number\n",n);
	 if(check_perfect(n))
                printf("\"%d\" is perfect number\n",n);
        else
                printf("\"%d\" is not perfect number\n",n);
}
