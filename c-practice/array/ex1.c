#include<stdio.h>
int main()
{
    int n=5;
    //printf("enter the values\n");
    //scanf("%d",&n);
     int arr[n];
     printf("enter the elements : %d\n",n);
    for (int  i = 0; i < 5; i++)
    {
     scanf("%d",&arr[i]);
    }
    int max,min;
      max = min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr [i] > max){
        max = arr[i];
        }if(arr[i] < min){ 
        min = arr[i];

        }
    }
    printf("Maxmium of elements :%d\n",max);
    printf("Mininum of elements :%d\n",min);
    return 0;
}