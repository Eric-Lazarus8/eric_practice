#include<stdio.h>
int main()
{
	int n = 0x1234;
        int a = (n&0x000f);
        int b = (n&0x00f0)>>4;
        int c = (n&0x0f00)>>8;
	int d = (n&0xf000)>>12;
	n = (a<<12)|(b<<8)|(c<<4)|d;
	printf("%x\n",n);
}
