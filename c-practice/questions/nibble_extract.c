#include<stdio.h>
int main(){
   unsigned int n,num;
    printf("enter the number\n:");
    scanf("%d",&n);
    num = ((n>>8)&0xf);
   /// num = n&(0x0f00);
   // num = num>>8;
    printf("number%x\n",num);
}