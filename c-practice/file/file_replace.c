#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
    char filename[256];
    char new_text[MAX_LINE];
    char buffer[MAX_LINE];
    int target_line, current_line = 1;

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    printf("Enter line number to replace: ");
    scanf("%d", &target_line);
    getchar();

    printf("Enter new text for line %d: ", target_line);
    fgets(new_text, MAX_LINE, stdin);
    new_text[strcspn(new_text, "\n")] = 0;

    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!file || !temp) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, MAX_LINE, file)) {
        if (current_line == target_line) {
            fprintf(temp, "%s\n", new_text);
        } else {
            fputs(buffer, temp);
        }
        current_line++;
    }

    fclose(file);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d replaced successfully in %s.\n", target_line, filename);
    return 0;
}
