#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,10,50};

	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("duplicate :%d\n",arr[i]);
			}
		}
	}

}
