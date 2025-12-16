#include<stdio.h>
int is_vowel(char c)
{
	return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}
int main()
{
	char vowels[10],consonants[30];
	int vo=0,co=0;
	for(char c='A';c<='Z';c++)
	{
		if(is_vowel(c))
		{
			vowels[vo++]=c;
		}
		else
		{
			consonants[co++]=c;
		}
	}
	vowels[vo]='\0';
	consonants[co]='\0';

	printf("vowels:%s\n",vowels);
	printf("Consonants:%s\n",consonants);

	return 0;
}
