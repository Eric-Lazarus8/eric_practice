#include<stdio.h>
int main(){
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    a = a^b;
    b = b^a;
    a = a^b;
    printf("swap after a and b : %d %d\n",a,b);
}
