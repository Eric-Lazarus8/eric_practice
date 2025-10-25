#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    pid_t pid = fork();  // Step 1: fork

    if (pid < 0) exit(EXIT_FAILURE); // Fork failed
    if (pid > 0) exit(EXIT_SUCCESS); // Parent exits, child continues

    // Step 2: Child process runs in background
    while (1) {
        FILE *fp = fopen("/tmp/fork_test.log", "a+");
        if (fp) {
            time_t now = time(NULL);
            fprintf(fp, "Process alive: %s", ctime(&now));
            fclose(fp);
        }
        sleep(5);
    }

    return 0;
}

