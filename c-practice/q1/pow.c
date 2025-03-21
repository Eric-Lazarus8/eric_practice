#include<stdio.h>
#include<math.h>
int main(){
    int n,p,x;
    printf("enter the number and power\n:");
    scanf("%d%d",&n,&x);
    p=(int)pow(n,x);
    printf("power of number : %d",p);
    return 0;
}