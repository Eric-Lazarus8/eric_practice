#include<stdio.h>
#include<string.h>
int myascii(char str[])
{
    int i = 0,num = 0;

    while(str[i]){
    if(str[i]>='0'&&str[i]<='9')
    {
        num = num*10+(str[i]-'0');
    }
  /*if(str[i]==' ')
    {

    }*/
    i++;
}
    return num;
}
int main()
{
    char str[30];
    printf("enter the string:");;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int numbers= myascii(str);
    printf("integers : %d\n",numbers);

}