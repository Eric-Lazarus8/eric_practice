#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p[3] = {{1,2},{3,4},{5,6}};
    for(int i=0;i<3;i++)
        printf("%d %d\n", p[i].x, p[i].y);
    return 0;
}

