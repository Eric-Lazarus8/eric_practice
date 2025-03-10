#include<stdio.h>
int main(){
	int i,j;
	printf("enter i and j values");
	scanf("%d%d",&i,&j);
	for(i=0;i<=5;i++)
	{
		printf(" \n");
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
	}
	printf("\n");
	return 0;
	
}
