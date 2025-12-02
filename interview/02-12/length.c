#include<stdio.h>

int main()
{
	char s[100];
	printf("enter string\n");
	fgets(s,sizeof(s),stdin);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='\n')
		{
			s[i] ='\0';
		}
		i++;
	}
	int len=0;
	for(int j=0;s[j]!='\0';j++)
	{
		len++;
	}
	printf("len =%d\n",len);
	return 0;
}
