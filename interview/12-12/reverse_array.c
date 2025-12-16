#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void revarray(int *arr,int size)
{
	int *start = arr;
	int *end = arr+size-1;

	while(start<end)
	{
		swap(start,end);
		start++;
		end--;
	}
}
void print(int *arr, int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",*(arr+i));
		printf("\n");

}
int main()
{
	int num[]={10,20,30,40,50};
	int size = sizeof(num)/sizeof(num[0]);
	printf("printing elements in the array:");
	print(num,size);
	revarray(num,size);
	printf("after reversing array:");
	print(num,size);
	return 0;
}

