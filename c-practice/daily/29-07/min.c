#include<stdio.h>
int main()
{
	int n;
	printf("enter no of elements ");
	scanf("%d",&n);
	int ar[n];
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}

	int min = ar[0];
	for(int i=0;i<n;i++)
	{
		if(ar[i]<min)
		{
			min = ar[i];
		}

	}
	printf("%d\n",min);
}
