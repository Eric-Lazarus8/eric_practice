#include<stdio.h>
int main(){
	int n,i;
	printf("enter the size and elements in the array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int even[n],odd[n];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
                 even[i]=a[i];
		 printf("%d is even\n",a[i]);
		}else{
			odd[i]=a[i];
			printf("%d is odd\n",a[i]);
		}
	}printf("\n");
}
