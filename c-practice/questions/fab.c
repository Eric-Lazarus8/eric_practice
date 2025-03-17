#include<stdio.h>
int main(){
    int a=0,b=1;
    int i,n;
    printf("enter the n numbers\n");
    scanf("%d",&n);
    for(i = 0; i <=n/2; i++)
    {
        printf("%d%d",a,b);
        a=b+a;
        b=a+b;
       // printf("n numbers :%d %d\n",a,b);
    }printf("\n");
return 0;
}
