#include<stdio.h>
#include<string.h>
struct time
{
    int hours,minutes,seconds;
};
int main()
{
    struct time t1,t2,result;
    //time1
    printf("enter the hour,minutes,seconds for time1:");
    scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
    //time2
    printf("enter the hour,minutes,seconds for time2:");
    scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
    //adding two times
    result.seconds=t1.seconds+t2.seconds;
    result.minutes=t1.minutes+t2.minutes+result.seconds/60;
    result.hours=t1.hours+t2.hours+result.minutes/60;
    //adjusting  minutes and seconds
    result.minutes %= 60;
    result.seconds %= 60;

    printf("final time is %d:%d:%d\n",result.hours,result.minutes,result.seconds);
    return 0;
}