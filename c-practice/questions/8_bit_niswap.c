#include<stdio.h>
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    //n= (0x0001<<4)|(0x0010>>0);
    int a= (n&0xf0);// (a>>4);
    int b= (n&0x0f) ;//(b<<4);
    n = (a>>4)&(b<<4);
    printf("nibble swap of number:%x\n",n);
    return 0;
}