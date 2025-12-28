#include <stdio.h>

int main()
{
    unsigned int num;
    int n;

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Enter bit position (n): ");
    scanf("%d", &n);

    if (num & (1 << n))
        printf("Bit at position %d is 1\n", n);
    else
        printf("Bit at position %d is 0\n", n);

    return 0;
}

