#include<stdio.h>
void my_strcat(char dest[],char src[])
{
	int i = 0;
	while (dest[i]!='\0')
	{
		i++;
	}
	int j =0;
	while(src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
}
void my_print(char dest[])
{
	for(int i=0;dest[i]!='\0';i++)
	{
		printf("%c",dest[i]);
	}
	printf("\n");
}
int main()
{
	char dest[10]="DZO ";
	char src[10]="ERIC";
	my_strcat(dest,src);
	my_print(dest);
}
