#include<stdio.h>
#include<stdint.h>
int main()
{
	uint16_t num,last_digit;
	printf("enter the number:");
	scanf("%hd",&num);
	last_digit = num%10;
	while(num>10)
	{
		num = num/10;

		//last_digit = num%10;
	}
	printf("first digit:%d\nlast digit:%d\n ",num,last_digit);
	return 0;

}
