#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t c1, c2, c3;

    c1 = fork();
    if (c1 == 0) {
        printf("Child 1: PID=%d, PPID=%d\n", getpid(), getppid());
        return 0;
    }

    c2 = fork();
    if (c2 == 0) {
        printf("Child 2: PID=%d, PPID=%d\n", getpid(), getppid());
        return 0;
    }

    c3 = fork();
    if (c3 == 0) {
        printf("Child 3: PID=%d, PPID=%d\n", getpid(), getppid());
        return 0;
    }

    printf("Parent: PID=%d, Children=%d %d %d\n", getpid(), c1, c2, c3);
    return 0;
}

