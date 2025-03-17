#include<stdio.h>
int main(){
	int a;
	printf("enter the number : ");
	scanf("%d",&a);
	 if((a & (a-1))==0)
	 {
	printf("given number is pow of two : %d\n",a);
	 }else{
		printf("given number is not pow of two : %d\n",a);
	 }
	return 0;
}
