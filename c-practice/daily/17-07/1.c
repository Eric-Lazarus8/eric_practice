#include <stdio.h>

void modify(int x) {
    x = x + 10;
}

int main() {
    int a = 5,x;
    modify(a);
    printf("a = %d\n", a);  // Output: a = 5
    modify(x);
    printf("x = %d\n", x); 
    return 0;
}
