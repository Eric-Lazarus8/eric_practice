#include <stdio.h>
int main()
{
  int n = 128,p1 = 5, p2 = 4;
  n|= (1<<5)|(1<<4);
  printf("result is:%d\n",n);
  return 0;
}
