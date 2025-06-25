#include<stdio.h>
#include<stdint.h>
int main(){
	uint16_t n,last;
	printf("enter the number;");
	scanf("%hd",&n);
	last=n%10;
	while(n>10)
	{
		n/=10;
	}
	printf("sum of first and last digit:%d\n",n+last);
	return 0;
}
