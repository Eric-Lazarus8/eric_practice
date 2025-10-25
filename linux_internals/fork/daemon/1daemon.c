#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    pid_t pid = fork();  // Fork process

    if (pid < 0) exit(EXIT_FAILURE); // Fork failed
    if (pid > 0) exit(EXIT_SUCCESS); // Parent exits

    // Child continues
    while (1) {
        FILE *fp = fopen("/tmp/background.log", "a+");
        if (fp) {
            time_t now = time(NULL);
            fprintf(fp, "Process alive at: %s", ctime(&now));
            fclose(fp);
        }
        sleep(5);
    }

    return 0;
}

