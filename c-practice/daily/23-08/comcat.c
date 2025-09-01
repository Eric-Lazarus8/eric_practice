#include<stdio.h>
void concat(char *s1,char *s2)
{
	while(*s1)s1++;
	while(*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}
int main()
{
	char str1[100],str2[100];
	printf("enter string1:");
	scanf("%[^\n]",str1);
        printf("enter string2:");
        scanf("%[^\n]",str2);

	concat(str1,str2);
	printf("%s",str1);
	return 0;
}
