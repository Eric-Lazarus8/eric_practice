#include<stdio.h>
int mystr_len(char *s)
{
	int len=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]!='\0')
			len++;
	}
	return len;
}
void reverse(char *s)
{
	char *start = s;
	int len = mystr_len(s);
	char *end = s+len-1;
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
void myprint(char *s)
{
	for(int i=0;s[i]!='\0';i++)
        {
        printf("%c",s[i]);
        }
	printf("\n");
}
int main()
{
	char s[100];
	printf("entetr string:");
	fgets(s,sizeof(s),stdin);
	myprint(s);
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
	myprint(s);
	reverse(s);
	myprint(s);

}
