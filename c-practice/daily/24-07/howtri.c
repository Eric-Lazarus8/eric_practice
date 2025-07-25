#include<stdio.h>
int main()
{
	int n,i,k,j;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("-");
		}
		for(k=1;k<=i;k++)
		{
			if(i == n|| k == n|| k == 1|| i == n+i+1 ) 
			{
			printf("* ");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

}
