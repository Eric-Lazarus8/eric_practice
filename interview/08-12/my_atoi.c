#include<stdio.h>
int my_atoi(char *s)
{
	while(*s == ' ')
	{
		s++;
	}
	int sign = 1;
	if(*s=='-')
	{
		sign = -1;
		s++;
	}
	else if(*s=='+')
	{
		s++;
	}
	int res = 0;
	while(*s>='0'&&*s<='9')
	{
		res = res*10 + *s-'0';
		s++;
	}
	return res*sign;
}
int main()
{
	char s[100];
	printf("enter string:");
	fgets(s,sizeof(s),stdin);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='\n')
		{
			s[i]='\0';
		}
		i++;
	}
	int res = my_atoi(s);
	printf("%d\n",res);
	return 0;
}
