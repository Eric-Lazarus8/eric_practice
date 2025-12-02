#include<stdio.h>
int main()
{
	int my_strlen(char str[])
	{
		int count=0;
		while(str[count]!='\0')
		{
			count++;
		}
		return count;
	}
	char str[]="DZO_ERIC";
	int count = my_strlen(str);
	printf("%d\n",count);
}

