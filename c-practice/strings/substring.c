#include<stdio.h>
#include<string.h>
int sub_string(char text[],char pattern[])
{
	int i,j;
	for(i =0 ;text[i]!='\0';i++)
	{
		for(j=0;pattern[j]!='\0';j++)
		{
			if(text[i+j]!=pattern[j])
				break;
		}
		if(pattern[j]=='\0')
			return i;
	}
	return -1;

}
int main()
{
	char text[100],pattern[100];

	printf("enter string:\n");
	fgets(text,sizeof(text),stdin);
	text[strcspn(text,"\n")]='\0';
	printf("enter string to find:");
	fgets(pattern,sizeof(pattern),stdin);
        pattern[strcspn(pattern,"\n")]='\0';

	int pos= sub_string(text,pattern);

	if(pos==-1)
		printf("substring not found\n");
	else
		printf("substring found\n");
	return 0;
}
