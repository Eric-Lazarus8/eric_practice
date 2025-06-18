#include <stdio.h>
#include <math.h>
int palidrom(int n)
{
        int nn=0,t=n,digit = 0,r=0,c1=0,c2=0;
        while(n>0)
        {
                digit = t%10;
                r = r * 10 + digit;
                t/=10;
                c1++;
        }printf("%d",c1);
        t=n;
        if(n==r)
        {
                for(int i=1;i<=c1;i++)
                {
                        digit = t%10;
                        printf("%d",digit);
                if(digit%2==0)
                {
                        c2++;

                }t/=10;
                printf("%d",c2);

                }return c2;
        }
        if(n!=r)
        {
        nn = n * pow(10,c1)+ r;

        return nn;}
        if(n<10)
        {
                if(n%2==0)
                {
                        return 1;
                }else
                        return 0;
        }
}

int main()
{
    int n;
     printf("enter the number to check palidrom or not :");
        scanf("%d",&n);
        printf("%d",n);
        int k=palidrom(n);
        printf("%d",k);
    return 0;
}

