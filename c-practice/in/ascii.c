#include<stdio.h>
void reverse(char str[],int len)
{
    int start=0;
    int end = len-1;
    int temp;
    while(start<end)
{temp = str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
}
void my_itoa(int num, char str[]) {
    int i = 0;
    if(num == 0)
    {
        str[i]='0';
        str[i+1]='\0';
        return;
    }
    int isNegative = 0;
    if(num<0)
    {
        isNegative = 1;
        num = num*-1;
    }
      while(num!=0)
    {
        str[i] = (num%10)+'0';
        num /= 10;
        i++;
    }
        if(isNegative==1)
    {
        str[i]='-';
        i++;
    }
    str[i] = '\0'; 

    reverse(str, i); 
    
}
int main()
{
    int num;
    printf("enter the integer:");
    scanf("%d",&num);
    char res[20] ;
    my_itoa(num,res);
    printf("%s",res);
}

