#include <stdio.h>

unsigned char swapNibbles(unsigned char x) {
    return ((x & 0x0F) << 4) | ((x & 0xF0) >> 4);
}

int main() {
    unsigned char num;
    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("After nibble swap: %u\n", swapNibbles(num));
    return 0;
}

