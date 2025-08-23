#include<stdio.h>
int main()
{
	int rows,i,j,k;
	printf("enter no of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i+1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
	printf("\n");	
	}
}
