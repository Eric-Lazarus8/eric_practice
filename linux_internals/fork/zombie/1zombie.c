#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {  
        sleep(10); 
        printf("Parent finished\n");
    } 
    else if (pid == 0) {  
        printf("Child exiting, becoming zombie...\n");
        exit(0);   
    }
    return 0;
}

