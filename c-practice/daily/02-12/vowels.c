#include<stdio.h>
int is_vowel(char s)
{
	if(s>='A' && s<='Z')
	{
		s=s+32;
	}
	return ( s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
}
int main()
{
	char c[100];
	int vowel=0,constant=0;
	printf("enter string:");
	fgets(c,sizeof(c),stdin);
	int i=0;
	while(c[i]!='\0')
	{
		if(c[i]=='\n')
		{
			c[i]='\0';
			break;
		}
		i++;
	}
	for(int j=0;c[j]!='\0';j++)
	{
		char s = c[j];

		if((s>='a'&& s<='z')||(s>='A'&&s<='Z'))
		{
			if(is_vowel(s))
			{
				vowel++;
			}
			else
			{
				constant++;
			}
		}
	}
	printf("vowels=%d\n",vowel);
	printf("constant=%d\n",constant);
	return 0;
}
