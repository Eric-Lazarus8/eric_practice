#include<stdio.h>
int main()
{
        int s,s1,s2,i,n,z,j;
        printf("enter start table:");
        scanf("%d",&z);
         printf("enter end table:");
        scanf("%d",&n);
         printf("enter skip table:");                                                                                                                                scanf("%d %d %d",&s,&s1,&s2);
       int tab=0;
        for(j=1;j<=10;j++)
        {

        for(i=z;i<=n;i++)
        {
                if(i==s||i==s1||i==s2)
                {
                        continue;
                }
                tab = j*i;
                printf("%d x %d = %d\t",i,j,tab);
                //printf
        }
        printf("\n");
        }
        //printf("\n");
        return 0;
}
