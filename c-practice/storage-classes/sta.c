#include <stdio.h>
void fun()
{
	static int a ;
	a++;
	printf("%d\n",a);

}
int main(){
fun();
fun();
fun();
return 0;
}
	
