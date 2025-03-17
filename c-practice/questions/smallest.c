#include<stdio.h>
int main(){
    int n,i;
    //int a[n]={};
    printf("enter the list of array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int smallest = a[0];
    int sec_smallest = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest){
            smallest = a[i];
        }
        if((a[i]<sec_smallest)&&a[i]>smallest)
        {
            sec_smallest = a[i];

        }
        }

    printf("smallest number: %d\n",smallest);
    printf("sec smallest number:%d\n",sec_smallest);

    }