#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	char *p=str;
	int n = strlen(str);
	char *start = str;
	char *end = str+n-1;
	while(start<end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	for(int i=0;i<n;i++)
	{
		printf("%c",*(p+i));
	}
	return 0;
}
