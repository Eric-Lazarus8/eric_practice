#include<stdio.h>
int main(){
	int arr[5];
	printf("enter elements :");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("negative numbers:\n");
	for(int i=0;i<5;i++)
	{
		if(arr[i]<0)
		printf("%d\n",arr[i]);
	}
}
