#include<stdio.h>

char *my_strstr(char *text,char *pattern)
{
	int i,j;
	if(*pattern=='\0')
		return text;
	for(i=0;text[i]!='\0';i++)
	{
		for(j=0;pattern[j]!='\0';j++)
		{
			if(text[i+j]=='\0'||text[i+j]!=pattern[j])
				break;
		}
		if(pattern[j]=='\0')
			return &text[i];
	}
	return NULL;
}
int main()
{
	char s[100]="Embedded Systems";
	char t[100]="Systems";
	char *res = my_strstr(s,t);
	if(res==NULL)
		printf("substring %snot found:\n",t);
	else
		printf("substring \"%s\" found:%ld\n",t,res-s);
	return 0;
}
