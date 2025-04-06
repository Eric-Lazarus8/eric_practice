#include<stdio.h>
#include<string.h>
struct text
{
    char s[1000];
};
int main()
{
    struct text s;
    strcpy(s.s ,"Hi this is Eric\nI Love playing games both indoor and outdoor");
    printf("my String is %s\n",s.s);
    return 0;
}