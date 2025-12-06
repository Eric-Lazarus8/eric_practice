#include<stdio.h>
int my_strlen(char *s)
{
	int count=0;
	while(s[count]!='\0')
	{
		count++;
	}
	return count;
}
void reverse(char *start,char *end)
{
	while(start<end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
void word(char *s)
{
	int len=my_strlen(s);
	char *start=s;
	char *end =s+len-1;
	reverse(start,end);
	char *word_start=s;
	char *temp=s;
	while(*temp)
	{
		temp++;
		if(*temp==' '||*temp=='\0')
		{
			reverse(word_start,temp-1);
			word_start=temp+1;
		}

	}

}
int main()
{
	char s[]="hello world";
	word(s);
	printf("%s\n",s);
	return 0;
}
