#include<stdio.h>
int main()
{
	int i,n;
	printf("enter table you want:");
	scanf("%d",&n);
	int tab=0;
	for(i=1;i<=10;i++)
	{
		tab = n*i;
		printf("%d x %d = %d\n",n,i,tab);
	}
	printf("\n");
	return 0;
}
