#include<stdio.h>
int main(){
	int n,i;
	//int a[n];
	printf("enter no of array elements\n");
	scanf("%d",&n);
        int a[n];
	int sum =0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}printf("elements in the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}//printf("sum of elements\n");
	for(i=0;i<n;i++)
	{
		sum = sum+(a[i]);
	}
printf("sum of elements:%d\n",sum);
return 0;
}
