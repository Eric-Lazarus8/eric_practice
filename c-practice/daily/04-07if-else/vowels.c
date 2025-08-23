#include<stdio.h>
int main()
{
	char ch;
	printf("enter alphabet to check, it is a vowel or consonat:");
	scanf("%c",&ch);
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		char upper = (ch >= 'a' && ch <= 'z') ? ch-32 :ch ;

	if(upper == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) 
	{
		printf("letter is vowel\n");
	}
	else
		printf("letter is a consonant\n");
	}
	else 
		printf("given %c is not a alphabet\n",ch);
	return 0;
}
