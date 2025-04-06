#include<stdio.h>
struct details
{
    char name[20];
    int age;
};
 int main()
{
    struct details s1 ={"Eric" , 22};
    printf("%s\n%d\n",s1.name,s1.age);
}