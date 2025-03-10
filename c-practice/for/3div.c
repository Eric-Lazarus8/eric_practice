#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			printf("%d\t",i);
		}if(i%10==0)
		{
			printf("\n");
		}

		//printf("");
	}
	printf("\n");
	return 0;
}

