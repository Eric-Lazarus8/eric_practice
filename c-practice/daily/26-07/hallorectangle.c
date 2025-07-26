#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter the number of rows \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=2*n;j++)
                {
			if(i==1 || i==n ||j==1||j==2*n)
			{
                        printf("* ");
			}
			else
			{
			printf("  ");
			}
	       	}
	       	printf(" \n");
	}

	return 0;
}

