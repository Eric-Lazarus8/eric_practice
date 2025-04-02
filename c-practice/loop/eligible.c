#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>=19)
    {
        printf("eligible for voting\n");
    }else{
        printf("not eligible");
    }printf("\n");
    return 0;
}