#include<stdio.h>
int print(int n)
{
	if (n==0)
	{
		return 0;
	}
	else{
		print(n-1);
		printf("%d\n",n);
	}
}
int main()
{

	print(8);
	return 0;
}
