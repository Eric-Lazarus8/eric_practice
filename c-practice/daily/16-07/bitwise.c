#include<stdio.h>
int main()
{
       unsigned char x = 0b00001100;
	x |=(1<<0);
        x = x&~(1<<3);
        x = x^(1<<2);
         if (x&(1<<1))
         { 
	  printf("bit is set\n");
	 }	 else
	 printf("bit is not set\n");
	 printf("final value of number %d\n",x);
	 return 0;
}
