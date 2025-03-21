#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    double d;
    long double e;
    printf("int size:%zu\n",sizeof(a));
    printf("char size:%zu\n",sizeof(b));
    printf("float size:%zu\n",sizeof(c));
    printf("double size:%zu\n",sizeof(d));
    printf("long long double:%zu\n",sizeof(e));
    return 0;
}