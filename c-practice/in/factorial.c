#include<stdio.h>
long long fac(int n)
{
	long long res=1;
	for(int i=1;i<=n;i++)
	res *=i;
	return res;
}
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	long long res = fac(n);
	printf("%lld\n",res);
	return 0;
}
