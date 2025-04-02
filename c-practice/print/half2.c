#include<stdio.h>
int main()
{
    int rows;
    printf("enter the no of rows: ");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--)
    {
        for(int j=rows;j>=rows;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" @");
        }
        printf("\n");
    }
}