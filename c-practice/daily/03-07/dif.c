#include<stdio.h>

int main()
{
	int roll;
	float marks;
	char grade;

	printf("enter roll:\n");
	scanf("%d",&roll);

	printf("enter marks:\n");
	scanf("%f",&marks);

	printf("enter grade:\n");
	scanf("	%c",&grade);

	printf("student details:\nrollno:%d\nmarks:%f\ngrade:%c\n",roll,marks,grade);

	return 0;
}
