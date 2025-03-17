#include<stdio.h>
int main(){
	int a,b;
	printf("enter the a and b values : ");
	scanf("%d %d",&a,&b);
	float sum = a + (float)b;
        printf("sum is : %f\n",sum);
	float avg = sum/2;
	printf("average is : %.2f\n",avg);
	return 0;
}
