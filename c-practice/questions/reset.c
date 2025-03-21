#include<stdio.h>
int main (){
    int i,n,count =0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<32;i++)
    {
        if(((n>>i)&1)==0)
        {
            count ++;
        }
    }
printf("count of reset bits:%d\n",count);
}