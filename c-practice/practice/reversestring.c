#include <stdio.h>
#include <string.h>

int main() {
    char str[30] = "Hello, World!";
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Reverse the string directly in the main block
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}