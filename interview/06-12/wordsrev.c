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
void wordrev(char *s)
{
	char *start = s;
	int len = strlen(s);
	char *end = s+len-1;
	reverse(start,end);
	char *word_start = s;
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
	printf("enter string");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	wordrev(s);
	printf("%s\n",s);
	return 0;
}
