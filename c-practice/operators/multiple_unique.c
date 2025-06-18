#include<stdio.h>
void unique_elements(int a[],int n)
{
	int xor=0,i;
	for(i=0;i<n;i++)
	{
		xor ^= a[i];
	}
	int set_bit= xor & -xor;
	int x =0,y=0;
	for (i=0;i<n;i++)
	{
		if(a[i]&set_bit)
		{
			x^=a[i];
		}else{
			y^=a[i];}
	}
	printf("%d,%d:are the unique numbers in the array\n",x,y);
}
int main()
{
	int x,y,n,i;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	unique_elements(a,n);
	//printf("%d,%d: are the unique numbers\n",x,y);
}
