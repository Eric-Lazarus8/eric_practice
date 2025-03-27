#include<stdio.h>
int main(){
	int a,i;
	///int n[a];
	printf("enter the no of array elements\n");
	scanf("%d",&a);
	int n[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("printing array elements\n");
	for(i=0;i<a;i++)
	{
		printf("%d\t",n[i]);
	}
	printf("\n");
	return 0;



}

