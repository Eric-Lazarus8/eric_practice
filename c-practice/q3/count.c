#include<stdio.h>
int main(){
    int i,count=0;
    printf("enter the number\n");
    scanf("%d",&i);
    if(i==0){
        printf("no of digits in the number= 0\n");
    }else{
        while(i>0){
            i=i/10;
            count++;
        }//printf("no of digits in the number = %d\n")
    }printf("no of digits in the number = %d\n",count);
}
