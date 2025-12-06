#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
	char *start = s;
	char *end = s+strlen(s)-1,temp;

	while(start<end)
	{
		temp = *start;
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
		}
		i++;
	}
	reverse(s);
	printf("%s\n",s);
}
