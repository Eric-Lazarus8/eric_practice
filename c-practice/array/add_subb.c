#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the No of elements:\n");
	scanf("%d",&n);
	int a[n],b[n];
	int sum[n],subb[n];
	printf("enter the elements for a:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements for b:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&b[i]);
        }
	for(i=0;i<n;i++)
	{
		sum[i]= a[i]+b[i];
	      subb[i]=a[i]-b[i];	
	}
	printf("Sum:");
	for(i=0;i<n;i++)
	{
		printf("%d",sum[i]);
	}
	printf("\n");
	 printf("Subb:");
        for(i=0;i<n;i++)
        {
                printf("%d",subb[i]);
        }
return 0;
}
