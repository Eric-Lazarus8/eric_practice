#include<stdio.h>
int main(){
    long long int n,r,d;
    r=0;
    printf("enter the number to reverse\n");
    scanf("%lld",&n);
    while(n>0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    printf("%lld\n",r);
    return 0;
}
