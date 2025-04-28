#include<stdio.h>
#include<string.h>
//extern size_t strcspn (const char *__s, const char *__reject);
int atoi(char str[])
{
        int i = 0,num = 0,sign = 1;
        printf("Initial string: %s\n", str);

        while(str[i] && !(str[i]=='+'||str[i]=='-'||str[i]>='0'&&str[i]<='9'))
        {
        i++;
        }
        if(str[i]=='+')
        {
                i++;       
        }else if (str[i]== '-')
        {
                sign = -1;

                i++;
        }
        while(str[i]>='0'&&str[i]<='9')
        {
                num = num*10+(str[i]-'0');
                i++;                    
        }
        return sign*num;
}
int main()
{
        char str[30];
        printf("enter the string to convert into integer:");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        printf("string is %s\n",str);
        int numbers = atoi(str);
        printf("integer is:%d\n",numbers);

}