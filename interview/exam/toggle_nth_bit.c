#include <stdio.h>

int main()
{
    unsigned int num;
    int n;

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Enter bit position (n): ");
    scanf("%d", &n);

    num = num ^ (1 << n);

    printf("Number after toggling bit %d: %u\n", n, num);

    return 0;
}

