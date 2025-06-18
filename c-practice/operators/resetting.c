#include<stdio.h>
int main()
{
	int n,p;
	printf("enter n value and bit position to reset:\n");
	scanf("%d%d",&n,&p);
	n = n&~(1<<p);
	printf("final n value after resetting : %d\n",n);
	return 0;
}
