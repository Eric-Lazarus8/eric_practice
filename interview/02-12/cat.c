#include<stdio.h>

void my_strcat(char dest[],char src[])
{
	int i = 0;
	while(dest[i]!='\0')
	{
		i++;
	}
	int j=0;
	while(src[j]!='\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i]='\0';
}
int main()
{
	char src[]="Hello";
	char dest[20]="world";
	my_strcat(dest,src);
	printf("%s",dest);
	printf("\n");
}

