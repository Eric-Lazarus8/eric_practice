#include<stdio.h>
int main()
{
	int i;
	printf("2 table using bitwise:\n");
	for(i=1;i<=10;i++)
	{
	int	result = i<<1;
		printf("2 x %d = %d\n",i,result);
	}
	return 0;
}
