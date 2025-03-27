#include<stdio.h>
int main()
{
	int i,n;
	printf("enter no of array elements\n");
	scanf("%d",&n);
	int a[n];
	 printf("values stored in the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	//printf("values stored in the array\n");
	}
	printf("reverse of array elements\n");
       for(i=n-1;i>=0;i--)
       {
	       printf("%d\t",a[i]);

       }printf("\n");
       return 0;
       	       
}
