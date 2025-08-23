#include<stdio.h>

int main()
{

	int i,j,n;

	printf("enter rows\n");
	scanf("%d",&n);
	
	int x=64;
//	for(int m=65;m<=91;m++)
	
	for(i=1;i<=n;i++)
	{
		for(j=x+1;j<=n+x;j++)
		{

			if((j>=65&&j<=90)||(j>=97&&j<=122))
			printf("%c ",j);
			else
				printf("  ");
			

		}
		x=x+n;
printf("\n");
	}

}
