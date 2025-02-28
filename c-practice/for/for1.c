#include <stdio.h>
int main()
{
  int row,column,i,j;
  printf("enter n k values");
  scanf("%d%d",&row,&column);
  for(i=0;i<row;i++)
  {
	  for(j=0;j<column;j++)
	  {
	    printf("* ");
	  }
     printf(" \n");
  }
return 0;
}
