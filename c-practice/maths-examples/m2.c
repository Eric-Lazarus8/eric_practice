#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values a and b ");
	scanf("%d%d",&a,&b);
	c= (a<b) ? a :b;
	printf("small number is %d",c);
	return 0;

}
