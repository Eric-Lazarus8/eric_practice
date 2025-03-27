#include<stdio.h>
int main(){
    long long int num;
    int count =0;
    printf("enter the number:\n");
    scanf("%lld",&num);
    if(num == 0){
        printf("number of digits in the number :1\n ");
    }
    else
    {
        while(num >0)
        {num = num/10;
        count++;
        }
    }printf("no of digits in the number:%d \n",count);
    return 0; 
}