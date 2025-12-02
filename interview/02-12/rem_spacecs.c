#include<stdio.h>
void remove_spaces(char s)
{
	int i=0,j=0;

	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			s[j] = s[i];
			j++;	
		}
		i++;
	}
	s[j] = '\0';
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
			break;
		}
		i++;
	}
	remove_spaces(s);

}
