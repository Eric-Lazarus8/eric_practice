#include <stdio.h>

int main()
{
    unsigned int num;
    int pos = -1;

    printf("Enter number: ");
    scanf("%u", &num);

    while (num)
    {
        pos++;
        num >>= 1;
    }

    if (pos >= 0)
        printf("Highest set bit position: %d\n", pos);
    else
        printf("No set bits (number is 0)\n");

    return 0;
}

