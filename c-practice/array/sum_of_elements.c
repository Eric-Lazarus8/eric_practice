#include<stdio.h>
int main()
{
	int arr[5];
	int sum = 0;
	printf("enter elemnts in the array:");
	for(int i=0;i<5;i++)
	{
                scanf("%d",&arr[i]);
		sum += arr[i];
        }
        printf("sum of elements:%d\n",sum);

}
