#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    // Call fork() to create a new process.
    pid_t pid = fork();

    // The return value of fork() determines which process is running.
    if (pid == 0) {
                                                                                           // Return value is 0: This is the CHILD process.
        printf("Hello from the CHILD! My PID is %d.\n", getpid());
    } else if (pid > 0) {
                                                                                  // Return value is positive: This is the PARENT process.
                                                                                    // The value 'pid' is the Process ID of the child.
        printf("Hello from the PARENT! I created a child with PID %d.\n", pid);
    } else {
                                                                     // Return value is -1: The fork failed.
        perror("fork failed");
        return 1;
    }

    return 0;
}
