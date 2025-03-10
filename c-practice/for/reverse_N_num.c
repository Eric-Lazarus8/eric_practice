#include <stdio.h>
int main(){
        int i,n;
	printf("enter the  number");
	scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                printf("%d \t",i);
		if (i%10==0)
		{
			printf("\n");
		
		}
	
        }
         printf("\n");
        return 0;
}
