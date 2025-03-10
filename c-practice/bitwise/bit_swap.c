#include<stdio.h>
int main()
{
	int x;
	printf("enter the value");
	scanf("%x",&x);
	int value1,bit1,swap;
	scanf("%d %d",value1,bit1);
	swap=(value1<<bit1);
	printf("res : %x",swap);
	return 0;
}
