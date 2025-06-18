#include<stdio.h>
int revsese_number(int num)
{
	int temp=num;
	if (num==0)
		return -1;
	int rev=0;
	while(temp>0)
	{
		int digit = temp%10;
		if(digit == 0)
			return  -1;
		rev = (rev* 10) + digit;
		temp /=10;
	}
	return rev;

}
int main()
{
	int num;
	printf("enter the number to reverse:");
	scanf("%d",&num);
	printf("reversed number:%d\n",revsese_number(num));

	
}
