#include<stdio.h>
#define size 10
int main()
{
    int a[size]={1,2,3,4,5,6,7,8,9,10};
    int b[size]={0};
    int i;
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    printf("copied data:");
    for(i=0;i<size;i++)
    {
        printf("%d",b[i]);
    }printf("\n");
    return 0;
}