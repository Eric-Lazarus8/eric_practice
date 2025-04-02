#include<stdio.h>
int main()
{
    int rows;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("@");
        }
     //   printf("\n");
    
        /*for(int l=rows;l>=1;l--)
        {
            printf(" ");
        }*/
//for(int i=rows;i>=1;i--)
  //  {
        for(int j=1;j<=rows-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
  }
}