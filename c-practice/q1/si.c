#include<stdio.h>
int main(){
    int i,p,t,r;
    printf("enter the values of principle, time and rate\n:");
    scanf("%d%d%d",&p,&t,&r);
    i = (p*t*r)/100;
    printf("interest :%d\n",i);
    return 0; 
}