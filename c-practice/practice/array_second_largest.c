#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of array elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(int i =0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
    int largest = a[0];
    int sec_lar= a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>largest)
    {
        sec_lar = largest;
        largest= a[i];
    }else if(a[i]>sec_lar&&a[i]<largest)
    {
        sec_lar=a[i];
    }
}
    printf("%d\n",largest);
    printf("%d\n",sec_lar);
    printf("\n");
}