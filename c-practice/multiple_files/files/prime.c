#include<calculator.h>

int prime(int num)
{
	if(num<=0)
		return 0;
	for(int i=0;i<num;i++)
	{
		if(num % i == 0)
				return 0;
	}return 1;

}
