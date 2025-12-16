#include <stdio.h>
#include <ctype.h>

void countAll(const char *str, int *words, int *lines, int *chars) {
    int i = 0;
    int inWord = 0;

    *words = 0;
    *lines = 0;
    *chars = 0;

    while (str[i] != '\0') {
        (*chars)++;

        if (str[i] == '\n') {
            (*lines)++;
        }

        if (!isspace((unsigned char)str[i])) {
            if (!inWord) {
                (*words)++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }

        i++;
    }

    return;
}

int main() {
    char str[200];

    printf("Enter your text (end with ENTER):\n");
    fgets(str, sizeof(str), stdin);

    int words, lines, chars;
    countAll(str, &words, &lines, &chars);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

