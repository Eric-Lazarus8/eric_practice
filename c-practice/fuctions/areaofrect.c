#include<stdio.h>
int areaofRect(int len,int bre)
{
    int area;
    area = len*bre;
    return area;
}
int main()
{
    int l,b;
    printf("enter the length and breadth:");
    scanf("%d%d",&l,&b);
    int area = areaofRect(l,b);
    printf("\"%d is the area of rectangle\"\n",area);
}