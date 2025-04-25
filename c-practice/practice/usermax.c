#include<stdio.h>
int usermax(int numbers[],int size)
{
    int max = numbers[0];
    for(int i=1;i<size;i++)
    {
        if(numbers[i]>max)
        {
            max = numbers[i];
        }
    }
    return max;
}
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int numbers[size];
    printf("enter the elements of array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }
    int max = usermax(numbers,size);
    printf("max of the array is %d\n",max);
    return 0;
}