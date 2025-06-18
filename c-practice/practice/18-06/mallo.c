#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int *p;
	//p =(int *) malloc(1*sizeof(int));
	int *p = malloc(5*sizeof(int));
	//int a[]={10,20,30,40,50,60};
	//printf()
	for(int i =0;i<5;i++)
	{
	//p[i]
	printf("%d\n",*(p+i));
	}
	printf("%zu\n",sizeof(*p));
	printf("%p\n",p);
        printf("%zu\n",sizeof(p));
}
