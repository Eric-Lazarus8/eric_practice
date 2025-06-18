#include<stdio.h>
int main()
{
	int a = 10;
	int *p = &a;
	a = 45;
	*p = 10;
	printf("add of &a:%p\n",&a);
	printf("value of a:%d\n",a);
	printf("add of &p:%p\n",&p);
	printf("value of *p:%d\n",*p);
	printf("add of *p:%p\n",*p);
	printf("add of p:%p\n",p);
}
