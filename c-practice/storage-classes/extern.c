#include<stdio.h>
int i = 8;//global varible
int main()
{
	int i = 5;//local variable
	printf("%d\n",i);
	{
 	extern int i;
	printf("%d\n",i);
	}
	return 0;

}

