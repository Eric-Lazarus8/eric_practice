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
void reverse(char *s)
{
	char *start=s;
	int len =my_strlen(s);
	char *end = s+len-1;
	while(start<end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
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
	reverse(s);
	printf("%s\n",s);
	return 0;
}
