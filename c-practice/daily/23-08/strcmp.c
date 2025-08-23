// String Compare
#include<stdio.h>
int mystrcmp(char *s1 , char *s2)
{
	while(*s1 && *s2)
	{
		if(*s1 != *s2)
		{
                      	return *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
void removeline(char *str)
{
	int i =0;
	while(str[i]!='\0')
	{
		if(str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
		i++;
	}
}
int main()
{
	char str1[100],str2[200];
	printf("enter string 1:");
	fgets(str1,sizeof(str1),stdin);
	printf("enter string 2:");
        fgets(str2,sizeof(str2),stdin);
	removeline(str1);
	removeline(str2);
int	res = mystrcmp(str1,str2);

	if(res == 0)
	{
		printf(" Both are equal\n");
	}else if(res > 0)
		printf("str1 is greater\n");
	else
	{
		printf("str2 is greater\n");
	}
	return 0;

}
