#include<stdio.h>
#include<string.h>
char *my_strstr(char *text,char *pattern)
{
	int i=0,j=0;
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
	char text[100],pattern[100];
	printf("enter text:");
	fgets(text,sizeof(text),stdin);
	text[strcspn(text,"\n")]='\0';
	printf("enter pattern:");
	fgets(pattern,sizeof(pattern),stdin);
	pattern[strcspn(pattern,"\n")]='\0';

	char *res = my_strstr(text,pattern);

	if(res==NULL)
	printf("substring not found\n");
	else
		printf("substring found:%ld\n",res-text);
	return 0;
}
