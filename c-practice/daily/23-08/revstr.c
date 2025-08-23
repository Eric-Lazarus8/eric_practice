//Reverse String
#include<stdio.h>
void myrev(char *str)
{
	int i=0,j=0;
	char temp;

	while(str[j] != '\0')
	j++;
	j--;

	while(i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	 char str[100];
	 printf("enter string to reverse:");
	 scanf("%[^\n]",str);

	 printf("%s\n",str);
	 myrev(str);
	  printf("%s\n",str);
	  return 0;
}
