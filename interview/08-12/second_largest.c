#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int lar = arr[0];
	int sec_lar = arr[1];

	if(sec_lar > lar)
	{
		int temp = lar;
		lar = sec_lar;
		sec_lar = temp;
	}

	for(int i=2;i<n;i++)
	{
		if(arr[i]>lar)
		{
			sec_lar=lar;
			lar = arr[i];
		}
		else if(arr[i]>sec_lar && arr[i]!=lar)
		{
			sec_lar = arr[i];
		}
	}
	if(lar == sec_lar)
		printf("no second largest\n");
	else
		printf("second largest = %d\n",sec_lar);
	printf("first largest= %d\n",lar);
}
