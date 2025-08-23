#include<stdio.h>
#include<string.h>
void middle(char *str)
{
	int space = 0;
	char *start = str;

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			space++;
		if(space == 1)
		{
			start = str+1;
		}
		else if(space == 2)
		{
			*str = '\0';
			break;
		}
	        }
		str++;
	}
	if(space >= 2)
	printf("%s\n",start);
	else
		printf("Not enough Words\n");
}
int main()
{
	char str[100];
	printf("enter 3 words:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] ='\0';
	middle(str);
	return 0;
}
