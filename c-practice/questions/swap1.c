#include<stdio.h>
int main(){
    int n,p1,p2,p3,p4;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the pos1 and pos2\n");
    scanf("%d%d",&p1,&p2);
    printf("enter the pos3 and pos4\n");
    scanf("%d%d",&p3,&p4);
    if(((n>>p1)&1)!=((n>>p2)&1))
    {
        n=n^(1<<p1)|(1<<p2);
    }if(((n>>p3)&1)!=((n>>p4)&1)){
        n=n^(1<<p3)|(1<<p4);
    }

    printf("%d\n",n);
    return 0;
}