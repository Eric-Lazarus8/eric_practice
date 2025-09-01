#include <stdio.h>
#include <stdlib.h>
struct Item { int id; float price; };
int main() {
    struct Item *p=malloc(sizeof(struct Item));
    p->id=101; p->price=99.5;
    printf("%d %.2f\n",p->id,p->price);
    free(p);
    return 0;
}

