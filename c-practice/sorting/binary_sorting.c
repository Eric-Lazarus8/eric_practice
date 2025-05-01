#include<stdio.h>
int mybinary_sorting(int a[],int l, int r, int key)
{
    int mid;
    while(l<=r)
    {
        mid =(l+r)/2;
        if (key == a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5};
    int key;
    printf("enter the number to find:");
    scanf("%d",&key);
   int search =  mybinary_sorting(a,0,4,key);
    printf("%d is present in the array index[%d]\n",key,search);
}