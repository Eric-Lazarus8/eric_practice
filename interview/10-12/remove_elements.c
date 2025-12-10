#include<stdio.h>
int main()
{
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("duplicate element:%d\n",arr[j]);
				count++;
			
			for(int k=j;k<n;k++)
			{
				arr[k]=arr[k+1];
			}
			n--;
			j--;
			}
		}
	}
	printf("count:%d\n",count);
	printf("sizeof array:%d\n",n);
}
