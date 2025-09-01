#include<stdio.h>
char* substr(char *str, char *res)
{
	int i=0;
	while(str[i] !='\0'&& str[i] != ' ' && str[i] != '\n' )
	{
		res[i] = str[i];
		i++;
	}
	res[i]='\0';
	return res;
}
int main()
{
	char str[100],res[100];
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	substr(str,res);
	printf("%s\n",res);

}
