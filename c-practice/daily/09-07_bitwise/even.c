#include<stdio.h>

int main()
{
	int n;
	printf("enter the number to check it is even or odd:\n");
	scanf("%d",&n);

	if(n&1)
		printf("%d is odd\n",n);
	else
		printf("%d id even\n",n);
	return 0;
}
