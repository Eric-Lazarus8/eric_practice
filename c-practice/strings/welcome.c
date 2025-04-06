#include<stdio.h>
int main()
{
    char a[30];
    printf("enter the string to print:\n ");
  //  scanf("%[^\n]");
  printf("*****************\n");
  fgets(a,sizeof(a),stdin);
  printf("*****************\n\n");
    printf("%s\n",a);
    printf("*****************\n");
}