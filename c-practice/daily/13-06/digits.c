#include<stdio.h>
int main()
{
        int o;
        long long int n;
        printf("enter the number: ");
        scanf("%lld",&n);
        for(o=0;n>0;o++)
        {
                n=n/10;
        }
        printf("No of digits in the number:%d\n",o);
}
