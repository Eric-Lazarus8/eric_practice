#include<stdio.h>
//#include<stdint.h>
#include<math.h>
int main(){
        int n,last,cnt=0;
        printf("enter the number:");
        scanf("%d",&n);
	int temp=n;
        last=n%10;
        while(n>10)
        {
                n/=10;
		cnt++;
        }
	int res;
	printf("%d %d %d\n",cnt,last,n);

	//printf("%d\n",temp-pow(10,cnt+1));
	res=(last*pow(10,cnt))+temp-(((pow(10,cnt))*n)+last)+n;
	printf("after swaping first and last digits  the result is %d\n",res);
        return 0;
}
