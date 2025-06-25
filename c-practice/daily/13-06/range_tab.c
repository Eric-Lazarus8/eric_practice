#include<stdio.h>
int main()
{
        int i,n,z,j;
        printf("enter start table:");
        scanf("%d",&z);
	 printf("enter end table:");
        scanf("%d",&n);
        int tab=0;
        for(j=1;j<=10;j++)
        {

        for(i=z;i<=n;i++)
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
