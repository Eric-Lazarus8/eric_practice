#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter elements ");
	for(int i = 0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	int min = arr[0];

	for(int i = 0;i<5;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		if(min > arr[i])
		{
			min = arr[i];
		}

	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
}
