#include<stdio.h>

int my_strlen(char s[])
{
	int count = 0;
	while(s[count]!='\0')
	{
		count++;
	}
	return count;
}

void reverse(char *start , char *end)
{
	char temp;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
void sentence(char *s)
{
	int len = my_strlen(s);
	reverse(s,s+len-1);

	char *start = s;
	char *temp = s;

	while(*temp)
	{
		if(*temp==' ')
		{
			reverse(start,temp-1);

			start = temp+1;
		}
		temp++;
	}	
	if(start<temp)
	{
		reverse(start,temp-1);
	}
}
void print(char s[])
{
	for(int i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
int main()
{
	char str[100]={};
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n')
		{
			str[i]='\0';
			break;
		}
	}
	sentence(str);
	print(str);
}
