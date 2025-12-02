#include<stdio.h>

int main()
{
	int a =10;
	int *p=&a;
	int **q=&p;
	printf("%d:a\n",a);
	printf("%d:&a\n",&a);
	printf("%d:p\n",p);
	printf("%d:&p\n",&p);
	printf("%d:*p\n",*p);
	printf("%d:q\n",q);
	printf("%d:*q\n",*q);
	printf("%d:**q\n",**q);
	printf("%d:&q\n",&q);
}
