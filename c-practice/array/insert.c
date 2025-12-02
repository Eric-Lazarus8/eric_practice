#include<stdio.h>
int main()
{
	int arr[10];
	int n , pos , value;
	printf("enter no of elements: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("enter position 1 to %d: ",n+1);
	scanf("%d",&pos);

	printf("enter value to insert: ");
	scanf("%d",&value);

	for(int i = n;i>=pos;i--)
	{
		arr[i] = arr[i-1];	
	}

	arr[pos-1] = value;

	n++;

	printf("after inserting element in array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
