#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t c1, c2, gc1, gc2;

    c1 = fork();
    if (c1 == 0) {
        gc1 = fork();
        if (gc1 == 0) {
            printf("Grandchild 1: PID=%d, PPID=%d\n", getpid(), getppid());
        } else {
            printf("Child 1: PID=%d, PPID=%d\n", getpid(), getppid());
        }
        return 0;
    }

    c2 = fork();
    if (c2 == 0) {
        gc2 = fork();
        if (gc2 == 0) {
            printf("Grandchild 2: PID=%d, PPID=%d\n", getpid(), getppid());
        } else {
            printf("Child 2: PID=%d, PPID=%d\n", getpid(), getppid());
        }
        return 0;
    }

    printf("Parent: PID=%d\n", getpid());
    return 0;
}

