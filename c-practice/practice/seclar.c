#include<stdio.h>
int main()
{
	int arr[5]={8,9,7,1,2};

	int max=arr[0];
	int sec_max=arr[1];

	if(sec_max>max)
	{
		int temp = max;
		max = sec_max;
		sec_max = temp;
	}

	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			sec_max = max;
			max=arr[i];
		}else if(arr[i]>sec_max && arr[i]!=max)
		{
			sec_max=arr[i];
		}


	}
	printf("%d\n",max);
	printf("%d\n",sec_max);
}
