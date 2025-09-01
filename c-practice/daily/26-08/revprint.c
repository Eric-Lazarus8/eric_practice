#include<stdio.h>
int print(int n)
{
        if (n==0)
        {
                return 0;
        }
        else{
                printf("%d\n",n);
		print(n-1);
        }
}
int main()
{

        print(8);
        return 0;
}

