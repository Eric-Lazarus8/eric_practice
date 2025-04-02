#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==1)
    {
        n++;
        printf("%d",n);
    }
    else{
        printf("%d",n);
    }printf("\n");
    return 0;

}