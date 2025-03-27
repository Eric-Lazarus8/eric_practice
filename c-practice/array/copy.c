#include<stdio.h>
int main(){
	int n,i;
	printf("enter the array elements:\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}printf("elements in the first array:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	int b[n];
	printf("second array elements:\t");
	for(i=0;i<n;i++)

	{
		b[i]=a[i];
		printf("%d\t",b[i]);
	}
	printf("\n");
	return 0;
}
