#include<stdio.h>
int main(){
    int n,r,s;
    s=0;
    printf("enter the number to reverse\n");
    scanf("%d",&n);
    while(n!=0)
    {
       // n=n/10;
        r=n%10;
        s=s*10+r;
        n=n/10;
    }printf("%d\n",s);
    return 0;
}