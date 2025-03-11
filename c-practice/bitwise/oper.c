#include<stdio.h>
int main()
{
	int n1,n2,n3,numa,numb;
	printf("enter numbers 1 and 2 :");
	scanf("%d %d",&numa,&numb);
        n1 = numa & numb ;
        n2 = numa | numb ;
        n3 = numa ^ numb ;
        printf("result is:\n %d\n %d\n %d \n",n1,n2,n3 );
        return 0;	
}
