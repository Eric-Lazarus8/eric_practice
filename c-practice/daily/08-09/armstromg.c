#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, temp, d, c=0;
    scanf("%d",&n);
    temp=n;
    while(temp){ c++; temp/=10; }
    temp=n;
    while(temp){
        d=temp%10;
        sum+=pow(d,c);
        temp/=10;
    }
    if(sum==n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}

