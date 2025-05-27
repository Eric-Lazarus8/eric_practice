#include<stdio.h>
int duplicate(int arr[],int size)
{
	int result =0;
	for(int i = 0;i<size;i++)
	{
		result ^= arr[i];
	}
	return result;
}
int main ()
{
	int size;
	printf("enter arr size:");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("after removing duplicate elements:%d\n",duplicate(arr,size));

}  
