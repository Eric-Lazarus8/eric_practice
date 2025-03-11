#include<stdio.h>
int main(){
    int n;
    printf("enter the number :\n ");
    scanf("%d",&n);
    if(n & 1 == 1)
    printf("number is odd \n");
    else
    printf("number is even\n");
    return 0;

}