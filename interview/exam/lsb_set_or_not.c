#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("LSB is SET\n");
    else
        printf("LSB is NOT SET\n");

    return 0;
}

