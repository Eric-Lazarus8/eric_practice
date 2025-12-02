#include<stdio.h>
int mylen(char *s)
{
	int len=0;
	for(int i=0;s[i]!='\0';i++)
	{
		len++;
	}
	return len;
}
char to_lower(char s)
{
	if(s>='A' && s<='Z')
	return s+32;
	return s;
}

int palindrome(char *s)
{
	int start = 0;
	int len = mylen(s);
	int end =len-1;
	while(start<end)
	{
		if(to_lower(s[start])!=to_lower(s[end]))
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
			break;
		}
		i++;
	}
	if(palindrome(s))
	{
		printf("string is palindrome:\n");
	}else
	{
	printf("string is not palindrome:\n");
	}
	return 0;
}
