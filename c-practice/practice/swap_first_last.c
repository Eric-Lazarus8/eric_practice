#include<stdio.h>
int swap(int n)
{
	int last = 0,first = 0, middle = 0;
	int temp = n , count = 0,power=1;
	// last digit
	last = n%10;
	// count no of digits
	while(temp > 0)
	{
		temp /= 10;
		count++;
	}
	//first digit
	temp = n;
	for(int i=0;i<count-1;i++)
	{
		temp/=10;	
	} 
	first = temp;
	//middle digits
	for(int i=1;i<count-1;i++)
	{
		power *= 10;
	}
	middle = (n/10)%power;
	int swapped = (last*power*10)+(middle*10)+(first);
	return swapped;
}
int main()
{
	int n;
	printf("Enter the number to swap first and last digits:");
	scanf("%d",&n);
	printf("after swapping:%d\n",swap(n));
}
