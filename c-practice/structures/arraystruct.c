#include<stdio.h>
#include<string.h>
//#pragma pack(push,1);
//struct student
struct __attribute__((packed)) student
{
    char name[30];
    int rollno;
    char dob[10];
    float marks;
};
union compare
{
    struct compar
    {
        char name[30];
        int rollno;
        char dob[10];
        float marks;
    }com;
}uni;

int main()
{
    int i,x,y;
    struct student s[3];
    for(i=0;i<3;i++)
    {
        printf("enter the details of student %d:\n ",i+1);
        printf("enter the student name:");
        fgets(s[i].name,30,stdin);
        s[i].name[strcspn (s[i].name,"\n")]='\0';
        printf("enter roll no:");

        scanf("%d",&s[i].rollno);
        getchar();
        printf("enter Date-of-birth:");
        fgets(s[i].dob,10,stdin);
        s[i].dob[strcspn(s[i].dob,"\n")]='\0';
        printf("enter the marks:");
        scanf("%f",&s[i].marks);
        getchar();
    }
    for(i=0;i<3;i++)
    {
        printf("Details of the student %d:\n",i+1);
        printf("name:%s\n",s[i].name);
        printf("rollno:%d\n",s[i].rollno);
        printf("Date-of-birth:%s\n",s[i].dob);
        printf("marks:%f\n",s[i].marks);
        
    }
    printf("enter two students to compare:\n");
    scanf("%d%d",&x,&y);
    if(strcmp(s[x-1].name,s[y-1].name)==0)
    {
        strcpy(uni.com.name,s[x-1].name);
    }
    if(s[x-1].rollno==s[y-1].rollno)
    {
        uni.com.rollno=s[x-1].rollno;
    }if(strcmp(s[x-1].dob,s[y-1].dob)==0)
    {
        strcpy(uni.com.dob,s[x-1].dob);
    }if(s[x-1].marks==s[y-1].marks)
    {
        uni.com.marks=s[x-1].marks;
    }
    printf("similarities of the student  %d and %d:\n",x,y);
    printf("name:%s\n",uni.com.name);
    printf("rollno:%d\n",uni.com.rollno);
    printf("Date-of-birth:%s\n",uni.com.dob);
    printf("marks:%f\n",uni.com.marks);
    printf("Size of union student is %ld\n",sizeof(uni));
    printf("Size of struct student is %ld\n",sizeof(s[i]));
    //printf("Size of struct student is %ld\n",sizeof(struct student));
    return 0;
}