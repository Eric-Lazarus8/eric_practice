#include<stdio.h>
int mystr_len(char s[])
{
	int len=0;
	for(int i =0;s[i]!='\0';i++)
	{
		if(s[i]!='\0')
			len++;

	}
	return len;
}
int main()
{
	char str[100];
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]== '\n')
		{
			str[i]='\0';
		}
		i++;
	}
	//str[strcspn(str,"\n")]='\0';
	int len = mystr_len(str);
	printf("%d\n",len);
	return 0;
}
