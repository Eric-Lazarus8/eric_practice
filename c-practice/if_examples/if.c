#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	if(a<b){
		printf("small number:%d\n",a);
	}
	if(a>b){
		printf("small number:%d\n",b);
	}
	if(a==b){
		printf("both are equal ");
	
	}
return 0;
}
