#include<stdio.h>
#include<string.h>
struct details
{
    char name[20];
    int age;
    float weight;
};
int main()
{
    struct details s;
    strcpy(s.name,"Eric");
    s.age = 22;
    s.weight = 59.5;
    printf("%s is name\n%d is age\n%f is weight\n",s.name,s.age,s.weight);
    return 0;
}