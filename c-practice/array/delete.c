#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of array and elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int p;
	printf("enter the position to delete");
        scanf("%d",&p);
	for(i=p;i<n-1;i++)
	{
		a[i]=a[i+1];
		//printf("%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",a[i]);

	}
	printf("\n");
}
