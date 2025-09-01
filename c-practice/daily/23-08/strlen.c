//string length
#include<stdio.h>

int mystrlen(char *str)
{
	int len=0;
	while(*str!='\0')
	{
		if(*str != ' ')
		len++;
		str++;
	}
	return len;
}
int main()
{
	char str[100];
	printf("enter string:");
	scanf("%[^\n]",str);

	printf("string length : %d \n",mystrlen(str));

	return 0;
}
