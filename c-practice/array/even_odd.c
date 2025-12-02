#include<stdio.h>
int main()
{
	int arr[7]= {1,2,3,4,5,6,8}; 
	int even_count=0,i;
	int odd_count=0;
	for(i=0;i<7;i++)
	{
	if(arr[i] %2==0)
	{
		even_count++;
	}else
		odd_count++;
	}
	printf("even:%d\n",even_count);
	printf("odd:%d\n",odd_count);
}
