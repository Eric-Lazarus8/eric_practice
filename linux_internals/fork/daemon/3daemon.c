#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>

int main() {
    pid_t pid;

    pid = fork();
    if (pid < 0) exit(EXIT_FAILURE);  
    if (pid > 0) exit(EXIT_SUCCESS);  

    if (setsid() < 0) exit(EXIT_FAILURE);

    pid = fork();
    if (pid < 0) exit(EXIT_FAILURE);
    if (pid > 0) exit(EXIT_SUCCESS);

    umask(0);

    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    while (1) {
        FILE *fp = fopen("/tmp/daemon_fork.log", "a+");
        if (fp) {
            time_t now = time(NULL);
            fprintf(fp, "Daemon PID: %d, PPID: %d, Time: %s", getpid(), getppid(), ctime(&now));
            fclose(fp);
        }
        sleep(5); 
    }

    return 0;
}

