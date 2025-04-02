#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("%d",n+10);
    }
    else{
        printf("%d",n);
    }printf("\n");
    return 0;
}