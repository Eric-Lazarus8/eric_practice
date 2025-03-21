#include<stdio.h>
int main(){
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("given number is even\n");
    }else{
        printf("given number is odd\n");
    }
    return 0;
}