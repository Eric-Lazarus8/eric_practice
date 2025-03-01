#include <stdio.h>
int main()
{
	auto int a=1;
	{
		auto int b=2;
	
	{
		auto int c=3;
			printf("%d\n",c);
	}
	printf("%d\n",b);
	}
printf("%d",a);
return 0;

}
