#include<stdio.h>
int my_strlen(char *s)
{
	int len=0;
	while(s[len]!='\0')
	{
		len++;
	}
	return len;
}
int is_palindrome(char *s)
{
	char *start = s;
	int len = my_strlen(s);
	char *end = s+len-1;
	while(start<end)
	{
		if(*start!=*end)
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
int main()
{
	char s[100];
	printf("enter string:");
	fgets(s,sizeof(s),stdin);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='\n')
		{
			s[i]='\0';
		}i++;
	}
	int res = is_palindrome(s);
	if(res == 1)
		printf("string is palindrome\n");
	else
		printf("string is not palindrome\n");
	return 0;
}
