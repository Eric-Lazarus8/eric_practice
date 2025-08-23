#include<stdio.h>
int main()
{
        int rows,i,k,j;
        printf("enter no of rows:");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++)
        {
                for(j=1;j<=rows-i;j++)
                {
                        printf("-");
                }
                for(k=1;k<=i-1;k++)
                {
                        printf("%d ",k);
                }
                printf("\n");
        }

}
