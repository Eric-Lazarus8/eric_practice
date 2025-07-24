#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter no of rows you want:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
return 0;
}
