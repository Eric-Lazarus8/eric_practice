#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "Alice");
    s1.marks = 85.5;
    printf("%d %s %.2f\n", s1.id, s1.name, s1.marks);
    return 0;
}

