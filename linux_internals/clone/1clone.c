#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int globalVar = 42;

int main() {
    int parentStackVar = 100;
    int *parentHeap = malloc(10);

    int childFunc(void *arg) {
        int childStackVar = 200;
        int *childHeap = malloc(10);

        printf("\n---- Child ----\n");
        printf("Code (main address)    : %p\n", (void *)main);
        printf("Global variable address: %p\n", (void *)&globalVar);
        printf("Heap variable address  : %p\n", (void *)childHeap);
        printf("Stack variable address : %p\n", (void *)&childStackVar);

        free(childHeap);
        return 0;
    }

    const int STACK_SIZE = 1024 * 1024;
    char *stack = malloc(STACK_SIZE);

    pid_t pid = clone(childFunc, stack + STACK_SIZE, CLONE_VM | SIGCHLD, NULL);

    printf("\n---- Parent ----\n");
    printf("Code (main address)    : %p\n", (void *)main);
    printf("Global variable address: %p\n", (void *)&globalVar);
    printf("Heap variable address  : %p\n", (void *)parentHeap);
    printf("Stack variable address : %p\n", (void *)&parentStackVar);

    waitpid(pid, NULL, 0);
    free(stack);
    free(parentHeap);
    return 0;
}
