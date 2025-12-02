#include<stdio.h>
static int m=10;
int main()
{
	static int m=5;
	printf("%d\n",m);
}
