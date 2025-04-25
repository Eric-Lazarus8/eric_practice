#include<stdio.h>
#include<string.h>
    struct student
    {
        char name[30];
        int rollno;
        float marks;    
    };
    union info
    {
        char name[30];
        int rollno;
        float marks;    
    };  
    int main()
    {
    struct student s;
    printf("enter the name of the student:\n");
    fgets(s.name,30,stdin);
    s.name[strcspn(s.name,"\n")]='\0';
    printf("enter roll no:\n");
    scanf("%d",&s.rollno);
    getchar();
    printf("enter marks:\n");
    scanf("%f",&s.marks);
    getchar();
    printf("student details:\n");
    printf("name of the student is %s\n",s.name);
    printf("roll no of the student is %d\n",s.rollno);
    printf("marks of the student is %f\n",s.marks);
//union details
        union info u;
        printf("enter the name of the student:\n");
        fgets(u.name,30,stdin);
        u.name[strcspn(u.name,"\n")]='\0';
        printf("enter roll no:\n");
        scanf("%d",&u.rollno);
        getchar();  
        printf("enter marks:\n");
        scanf("%f",&u.marks);
        getchar();
        printf("name:%s\n",u.name);
        printf("rollno:%d\n",u.rollno);
        printf("marks:%f\n",u.marks);   
return 0;
    }