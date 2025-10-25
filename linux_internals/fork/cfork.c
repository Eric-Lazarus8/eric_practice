#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;
    pid = fork();
    if (pid < 0) {
        fprintf(stderr, "Fork failed!\n");
        return 1;
    } else if (pid == 0) {
        printf("Hello from the child process! My PID is %d\n", getpid());
        printf("The parent's PID is %d\n", getppid());
    } else {
        printf("Hello from the parent process! My PID is %d\n", getpid());
        printf("The child's PID is %d\n", pid);
    }
    return 0;
}

