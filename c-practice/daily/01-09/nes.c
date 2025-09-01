#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int id;
    char name[20];
    struct Date doj;
};

int main() {
    struct Employee e = {1, "Bob", {1,1,2020}};
    printf("%d %s %d-%d-%d\n", e.id, e.name, e.doj.day, e.doj.month, e.doj.year);
    return 0;
}

