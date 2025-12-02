#include<stdio.h>
int my_strlen(char str[])
{
	int count=0;
	while(str[count]!='\0')
	{
		count++;
	}
	return count;
}
void reverse_section(char *start,char *end)
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
void solve(char *s)
{
	int len = my_strlen(s);
	reverse_section(s,s+len-1);
	
	char *word_start = s;
	char *temp = s;

	while(*temp)
	{
		temp++;
		if(*temp==' '||*temp=='\0')
		{
			reverse_section(word_start,temp-1);

			word_start = temp+1;
		}
	}
}
void my_print(char s[])
{
	int i =0;
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
int main()
{
	char str[20]="I Love Food";
	solve(str);
	my_print(str);

}
