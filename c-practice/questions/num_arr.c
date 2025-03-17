#include<stdio.h>
int main()
{
    int n,i,x;
    //int a[n]={};
    printf("enter the list of array\n");
    scanf("%d",&n);
int num=0;
//printf("enter which num to check:\n");
//scanf("%d",&num);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter which num to check:\n");
    scanf(" %d",&num);
    for(i=1;i<n;i++)
    {

        if(a[i] == num)
        {
            x=a[i];
            printf("number is present in the list\n");
        }
    }
    if(x!=num)
    printf("number is not there\n");
}