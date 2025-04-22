#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,N,n,i;
    printf("enter No of elements in the array:");
    scanf("%d",&n);
    p = (int *)malloc(n*(sizeof(int)));
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }printf("enter new size to reallocate:");
    scanf("%d",&N);
    p=(int *)realloc(p,N);
    printf("enter new elemets:");
    for(i=N-n;i<N;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Elements in the array after reallocating:");
    for(i=0;i<N;i++)
    {
    printf("%d ",p[i]);
    }printf("\n");
}