#include<stdio.h>
int missing_number(int a[],int n)
{
	int total = 0,arr = 0,i;
	for (i=0;i<n;i++)
	{
		total^=i;
	}
	for(i=0;i<n-1;i++)
	{
		arr^=a[i];
	}
	return total^arr;

}
int main()
{
	int i,n;
	printf("enter no of elements :\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	missing_number(a,n);
	printf("misssing element:%d\n",missing_number(a,n));
	
}
