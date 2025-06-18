#include<stdio.h>

void checkbit(int n,int p)
{
	if(n&(1<<p))
			{
			printf("bit position %d is SET in number %d\n",p,n);
			}
			else
			{
			printf("bit position %d is NOT-SET in number %d\n",p,n);
			}

}
int main()
{
int n,p;
printf("enter the number and bit position to check\n");
scanf("%d%d",&n,&p);
checkbit(n,p);
return 0;
}
