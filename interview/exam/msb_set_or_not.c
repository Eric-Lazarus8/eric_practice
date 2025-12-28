#include <stdio.h>

int main()
{
    int num;
    unsigned int mask = 1 << 31;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & mask)
        printf("MSB is SET\n");
    else
        printf("MSB is NOT SET\n");

    return 0;
}

