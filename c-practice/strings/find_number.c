#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int num=0,i=0,b=0;
    printf("enter the number to find:");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            printf("%d is present in the array in the place of a[%d]\n",num,i);
           b=1;
            break;
        }
    }
    if(b== 0)
    {
        printf("%d is not in the array",num);
    }
    printf("\n");
    return 0;
}