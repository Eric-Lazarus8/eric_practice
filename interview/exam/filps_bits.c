#include <stdio.h>

int main()
{
    unsigned int num, result;

    printf("Enter a number: ");
    scanf("%u", &num);

    result = ~num;

    printf("Number after flipping bits: %u\n", result);

    return 0;
}

