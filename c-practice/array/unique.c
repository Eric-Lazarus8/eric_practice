#include<stdio.h>
int main(){
	int i,n,j,count;
	printf("enter the array elements");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++)
	{count=0;
		for(j=0;j<n;j++)
                {
			if(i != j)
			{
				if(a[i] == a[j])
				{
					count++;
				}
			}
	}
		if(count==0)
		{
			printf("%d\n",a[i]);
		}
	}

	
}
