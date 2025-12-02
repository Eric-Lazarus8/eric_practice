#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	char *p = str;
	int my_strlen(char *s)
	{
		int len=0;
		while(s[len]!='\0')
		{
			len++;
		}
		return len;
	}
	int len = my_strlen(str);
	printf("%d\n",len);


}
