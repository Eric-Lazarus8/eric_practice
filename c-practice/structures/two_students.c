#include<stdio.h>
#include<string.h>
struct student_1
{
    char name[30];
    int age;
    float avg_marks;
};
struct student_2
{
    char name[30];
    int age;
    float avg_marks;
};
int main()
{
    struct student_1 s1;
    struct student_2 s2;
    printf("enter the name of the student_1:");
    //scanf("%[^\n]",s1.name);
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]='\0';
    printf("enter the age:");
    scanf("%d",&s1.age);
    printf("enter total marks:");
    scanf("%f",&s1.avg_marks);
    getchar();
    printf("enter the name of the student_2:");
    //scanf("%[^\n]",s2.name);
    fgets(s2.name,sizeof(s2.name),stdin);
    s2.name[strcspn(s2.name,"\n")]='\0';
    printf("enter the age:");
    scanf("%d",&s2.age);
    printf("enter total marks:");
    scanf("%f",&s2.avg_marks);
    printf("\"Details of student_1:\"\nName of the student_1:%s\nAge:%d\nAvg_marks%.1f\n",s1.name,s1.age,s1.avg_marks);
    printf("\"Details of student_2:\"\nName of the student_2:%s\nAge:%d\nAvg_marks%.1f\n",s2.name,s2.age,s2.avg_marks);
    return 0;    
}