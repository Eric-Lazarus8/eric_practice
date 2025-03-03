#include <stdio.h>
int a=5;

int main(){
	{static  int a = 4;
 printf("%d",a);}
	printf("%d",a);
 return 0;
}

