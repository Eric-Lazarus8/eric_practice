#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers to compare:");
	scanf("%d %d",&a,&b);

	if(a<b)
	printf("%d is larger num\n",b);
	else if (a>b)
		printf("%d is larger num\n",a);
	else 
		printf("both are equal\n"); 
	return 0;
}
