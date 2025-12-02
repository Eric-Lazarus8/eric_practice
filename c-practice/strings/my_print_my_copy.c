#include<stdio.h>
void my_copy(char dest[],char src[])
{
                int i=0;
                while(src[i]!='\0')
                {
                        dest[i]=src[i];
                        i++;
                }
                dest [i]='\0';
}
void my_print(char dest[])
{
                for (int i=0;dest[i]!='\0';i++)
                {
                        printf("%c",dest[i]);
                }
                printf("\n");
}
int main()
{
	char src[]="DZO";
	char dest[]="";
	my_copy(dest,src);
	my_print(dest);
}
