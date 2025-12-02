#include<stdio.h>
int main()
{
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements");
	for(int i =0 ;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("printing elements in the array:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}

}
