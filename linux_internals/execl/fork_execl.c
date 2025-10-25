#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        execl("/bin/ls", "ls", "-l", NULL);
    } else {
        wait(NULL);
        printf("Parent process continues\n");
    }
    return 0;
}

