#include<stdio.h>
#include<string.h>
void reverse(char *start, char *end)
{
	char temp;
	while(start<end)
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
	char *word_start=s;
	char *temp = s;
	while(*temp)
	{
		temp++;
		if(*temp==' '||*temp=='\0')
		{
			reverse(word_start,temp-1);
			word_start = temp+1;
		}
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
			s[i]='\0';
		i++;
	}
	sentence(s);
	printf("%s\n",s);;
	return 0;
}
