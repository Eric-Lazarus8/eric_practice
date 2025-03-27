#include<stdio.h>
int main(){
        int n,i;
        printf("enter the size and elements in the array");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        int even[n],odd[n];
	                printf("even numbers are:");
        for(i=0;i<n;i++)
		//printf("even numbers are:");
        {
                if(a[i]%2==0)
                {
                 even[i]=a[i];
                printf("%d\t",a[i]);
	
                }
		
        }printf("\n");
      	printf("odd numbers are:");
	for(i=0;i<n;i++)
	//printf("odd numbers are:");
	{

		if(a[i]%2==1){
                        odd[i]=a[i];
                        printf("%d\t",a[i]);
                }
	}
	printf("\n");
}                                                                                                 
