#include<stdio.h>
int areaoftriangle(int len,int bre)
{
    int area;
    area=(len*bre)/2;
    return area;
}
int main ()
{
    int l,b;
    printf("enter lenght and breath values:");
    scanf("%d%d",&l,&b);
    int area = areaoftriangle(l,b);
    printf("%d is the area of triangle\n",area);

}