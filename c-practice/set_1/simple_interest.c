#include<stdio.h>
int main()
{
    float p,r,t;
    printf("enter the values od principal, rate and time :\n");
    scanf("%f %f %f",&p,&r,&t);
    float i = p+r+t/100;
    //float i = p*(1+r*t);
    printf("simple interest is : %f\n",i );
    return 0;

}