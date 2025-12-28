#include <stdio.h>

int main()
{
    int num, ones = 0, zeros = 0, digit;

    printf("Enter binary number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 1)
            ones++;
        else if (digit == 0)
            zeros++;

        num /= 10;
    }

    printf("Total 1s = %d\n", ones);
    printf("Total 0s = %d\n", zeros);

    return 0;
}

