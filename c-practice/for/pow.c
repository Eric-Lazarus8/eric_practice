#include<stdio.h>
int main(){
	long long int a,b,c=1,i;
	printf("enter base and pow values:\n");
	scanf("%lld%lld",&a,&b);
	       if(b>0)
	       {
		        for(i=1;i<=b;i++)
			{
				c=c*a;
				//printf("%d\n",i);
			}	
				printf("%lld",c);
			
	       }else
	       
	       {       b=-1*b;
		       printf("%lld\n",b);
		       for(i=1;i<=b;i++)
		       {       
		       c=c*a;
		       printf("%lld\t%lld\n",i,c);
		       }
		       printf("%Lf",1/(long double)c);
		    
	       }
	printf("\n");
return 0;	
}
