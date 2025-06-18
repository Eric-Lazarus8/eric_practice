#include<stdio.h>
int unique_element(int a[],int n)
{
	int result = 0,i;
	for(i=0;i<n;i++)
	{
		result ^=  a[i];
	}
	return result;
}
int main()
{
	int n,i;
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	n= sizeof(a)/sizeof(a[0]);
	printf("%d:is the unique number\n",unique_element(a,n));

}
