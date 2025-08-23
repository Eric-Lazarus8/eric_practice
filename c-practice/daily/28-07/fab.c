#include<stdio.h>
int main()
{
	int a=0,b=1,n;
	printf("enter number for fabinous:");
	scanf("%d",&n);
	for(int i=0;i<n/2;i++)
	{
		printf("%d,%d,",a,b);
		a =a+b;
		b= a+b;
	}
	printf("\n");
	return 0;
}
