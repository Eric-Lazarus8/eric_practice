#include<stdio.h>
int main(){
	int n,i,j,count=0;
	printf("enter elements in the array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}printf("elements in the array:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		count++;
		break;
	}
	}
	printf("\n");
	printf("Duplicate elements:%d\n",count);
        return 0; 
	//}
}
