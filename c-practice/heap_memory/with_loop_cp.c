#include<stdio.h>
#define size 10
void Copyarray(int *sou,int *des,int Size)
{
    int *srcptr = sou;
    int *desptr = des;
    //Size =10;
    while(Size --)
    {
        *desptr++ = *srcptr++;
    }
}
int main()
{
    int sou[size] ;
    int des[size];
    int i;
    printf("enter elements in the array:");
    printf("sou elemets:");
    for(int i =0;i<size;i++)
    {
        scanf("%d",&sou[i]);
    
    printf("%d ",sou[i]);
    }
    printf("\n");
    Copyarray(sou,des,size);
    printf("show des array elements:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",des[i]);
    }
    printf("\n");
    return 0;

}