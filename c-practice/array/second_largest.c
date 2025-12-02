#include<stdio.h>
int main()
{
	int arr[5]={5,9,8,6,2};
	int first,sec;
	if(arr[0] > arr[1])
	{
		first = arr[0];
		sec = arr[1];
	}
	else
	{
		first = arr[1];
		sec = arr[0];
	}
	for(int i=2;i<5;i++)
	{
		if(arr[i] > first)
		{
			sec = first;
			first = arr[i];
		}
		else if(arr[i] > sec && arr[i]!=first)
		{
			sec = arr[i];
		}
	}
	printf("second largest :%d",sec);
}
