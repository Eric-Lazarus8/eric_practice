#include<stdio.h>
int main()
{
	int c=175;
    c=c^((1)|(1<<6)|(1<<2)|(1<<4)|(1<<5));
    //c=c^(1<<6);
   // c=c^(1<<2);
    //c=c^(1<<4);
    //c=c^(1<<5);
    printf("%d\n",c);
	return 0;
}
