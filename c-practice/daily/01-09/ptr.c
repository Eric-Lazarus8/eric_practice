#include <stdio.h>

struct Car {
    char brand[20];
    int year;
};

int main() {
    struct Car c = {"BMW", 2025};
    struct Car *ptr = &c;
    printf("%s %d\n", ptr->brand, ptr->year);
    return 0;
}

