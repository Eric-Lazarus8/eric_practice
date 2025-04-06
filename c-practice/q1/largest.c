#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter two numbers:\n ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("number 1 is largest:%d\n",n1);
    }else if(n2>n1){
        printf("number 2 is largest: %d\n",n2);
    }else if(n1==n2){
        printf("both numbers are equal\n");
    }
    return 0;
}