#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1: PID=%d, PPID=%d\n", getpid(), getppid());
    } else {
        pid_t pid2 = fork();
        if (pid2 == 0) {
            printf("Child 2: PID=%d, PPID=%d\n", getpid(), getppid());
        } else {
            printf("Parent: PID=%d\n", getpid());
        }
    }
    return 0;
}

