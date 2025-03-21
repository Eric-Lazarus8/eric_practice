#include<stdio.h>
int main(){
    int sum,avg,a,b;
    printf("enter a and b values:\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    avg = sum/2;
    printf("sum and average is:%d and %d\n",sum,avg);
    return 0;
}