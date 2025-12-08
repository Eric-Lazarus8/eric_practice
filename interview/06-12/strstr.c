#include<stdio.h>
#include<string.h>
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
	char s[100];
	char t[100];
	printf("enter string:");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	printf("enter substring to check:");
	fgets(t,sizeof(t),stdin);
	t[strcspn(t,"\n")]='\0';

	char *res = my_strstr(s,t);

	if(res == NULL)
		printf("substring \"%s\" not found\n",t);
	else
		printf("substring \"%s\" found at index:%ld\n",t,res-s);
	return 0;
}
