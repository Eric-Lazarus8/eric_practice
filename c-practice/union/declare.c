#include<stdio.h>
#include<string.h>
union student
{
    char name[30];
    int rollno;
    float marks;    
};
int main()
{
    union student s;
    printf("enter the name of the student:\n");
    fgets(s.name,30,stdin);
    s.name[strcspn(s.name,"\n")]='\0';
    printf("enter roll no:\n");
    scanf("%d",&s.rollno);
    getchar();
    printf("enter marks:\n");
    scanf("%f",&s.marks);
    getchar();
    printf("Details of the student:\n");
    printf("name:%s\n",s.name);
    printf("rollno:%d\n",s.rollno);
    printf("marks:%f\n",s.marks);
    printf("Size of union student is %ld\n",sizeof(s));
    printf("Size of union student is %ld\n",sizeof(union student));
    return 0;
}
//     return 0;
// }    