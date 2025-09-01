#include<stdio.h>
int main()
{
  FILE *fptr;
   
  if(fptr == NULL)
{
printf("error file will not be created.\n");
return 1;
}

fprintf(fptr,"Hi World!");

fclose(fptr);

printf("file is created successfully:\n");
return 0;


}
