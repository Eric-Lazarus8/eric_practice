#include<stdio.h>
int main()
{
    char str[100],a;
    int i =0;
    printf("enter the string to reverse:");
    scanf("%[^\n]",str);
    int length=0;
    while(str[length] !='\0') 
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        a=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=a;
    }
    printf("reverse of string is:%s\n",str);
}