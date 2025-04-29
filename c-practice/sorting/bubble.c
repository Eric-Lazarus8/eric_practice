#include<stdio.h>
void bubblesort(int a[],int n)
{
    int temp=0,i,j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
        
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    
            }}
}}
int main()
{
    int n;
    printf("enter the no of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("befor sorting array:");
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
    bubblesort(a,n);
    printf("after sorting:");
    for(int i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    printf("\n");
}