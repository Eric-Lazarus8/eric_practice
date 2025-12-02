#include<stdio.h>
void swap(int *a,int *b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
int main()
{
	int a,b ;
	printf("enter numbers :");
	scanf("%d %d",&a,&b);
	printf("before swapping %d,%d\n",a,b);
	swap(&a,&b);
	printf("after swapping %d, %d\n",a,b);
	return 0;

}

