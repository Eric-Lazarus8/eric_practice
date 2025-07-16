#include<stdio.h>

int main()
{
	int n,a,b,c;
	printf("enter the number:");
	scanf("%d",&n);
	a = n>>2;
	b = n<<2;
	c = a & b;
	 printf("%d\n",a);
	  printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
