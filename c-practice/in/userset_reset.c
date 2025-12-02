#include<stdio.h>
int set(int n,int k)
{
	return (n|(1<<k));
}
int reset(int n, int k)
{
	return (n&~(1<<k));
}
int toggle(int n,int k)
{
	return (n^(1<<k));
}
int main()
{
	int n,k,choice;
	printf("enter number and postion:");
	scanf("%d %d",&n,&k);

	printf("\nchoose operation:\n");
	printf("1.set bit\n");
	printf("2.reset bit\n");
	printf("3.toggle bit\n");
	printf("enter option:\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("after setting bit %d\n",set(n,k));
					break;

		case 2:
			printf("after resetting bit %d\n",reset(n,k));
			break;

		case 3:
			printf("after toggling bit %d\n",toggle(n,k));
			break;

		default:
			printf("invaild choice\n");

	}

	return 0;
}
