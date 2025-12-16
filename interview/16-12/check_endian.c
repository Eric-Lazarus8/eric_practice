#include<stdio.h>

int main()
{
	unsigned int x = 0x1;
	char *c = (char *)&x;

	if(*c == 1)
	{
		printf("little endian\n");
	}else
		printf("big endian\n");

	return 0;
}
