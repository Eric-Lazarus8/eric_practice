#include <stdio.h>

int main()
{
    unsigned int num;

    printf("Enter number: ");
    scanf("%u", &num);

    if (num == 0)
    {
        printf("No set bits (number is 0)\n");
        return 0;
    }

    unsigned int lowest_bit = num & (-num);

    printf("Lowest set bit value: %u\n", lowest_bit);

    return 0;
}

