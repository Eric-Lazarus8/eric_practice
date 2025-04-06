#include<stdio.h>
int main()
{
    int i,b=0,n,num;
    printf("enter the no of array elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to find:");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("%d is present in the array in the place of a[%d]\n",num,i);
           b=1;
            break;
        }
    }
    if(b == 0)
    {
        printf("%d is not in the array",num);
    }
    printf("\n");
    return 0;
}