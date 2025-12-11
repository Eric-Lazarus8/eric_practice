#include<stdio.h>
#include<math.h>
int checkPrime(int n)
{
        for(int i=2;i*i<=n;i++)
        {
                if(n%i==0)
                {
                        return 0;
                }

        }
        return 1;
}
int armstrong(int n)
{
        int temp =n;
        int t=n;
        int sum=0;
        int count=0;
        while(t!=0)
        {
                count++;
                t=t/10;
        }
        while(temp!=0)
        {
        int r = temp%10;
        int p = pow(r,count);
        sum += p ;
        temp=temp/10;
        }
        if(sum == n)
        {
                return 1;
        }
        return 0;
}
int check_perfect(int n)
{
        int sum=0;
        for(int i=1;i<n;i++)
        {
                if(n%i==0)
                {
                        sum += i;
                }
        }
                if(n==sum)
                {
                        return 1;
                }else
                        return 0;

}
int main()
{
	printf("searching for numbersfor two or more properties...\n");
	printf("..................................................\n");
	printf("Number\t prime\t armstrong\n perfect\n");
	printf("..................................................\n");

	for(int i=2;i<10000;i++)
	{
		int isP = checkPrime(i);
		int isA = armstrong(i);
		int isp = check_perfect(i);

		if((isP && isA) || (isA && isp) || (isP && isp))
		{
			printf("%d\t%s\t%s\t\t%s\n",
					i,
					isP ? "Yes" : "No",
					isA ? "Yes" : "No",
					isp ? "Yes" : "No");
		}

	}
	return 0;
}
