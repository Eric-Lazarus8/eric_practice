#include<stdio.h>
int main()
{
        int i,n,j;
        printf("enter table you want:");
        scanf("%d",&n);
        int tab=0;
	for(j=1;j<=10;j++)
	{

        for(i=1;i<=n;i++)
        {
                tab = j*i;
                printf("%d x %d = %d\t",i,j,tab);
		//printf
        }
	printf("\n");
	}
        //printf("\n");
        return 0;
}
