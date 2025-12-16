#include<stdio.h>
int main()
{
	char *oct[]= {"000","001","010","011","100","101","011","111"};

	char input[] = "703";
	int i=0;
	while(input[i]!='\0')
	{
		int digit = input[i]-'0';
		printf("%s",oct[digit]);
		i++;
	}
	printf("\n");
	return 0;
}
