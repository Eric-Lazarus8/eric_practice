#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MSGSZ 100

struct msgbuf {
    long mtype;
    char buffer[MSGSZ];
};

int main() {
    int qid, i;
    struct msgbuf m1;
    key_t key;

    key = ftok(".", 'A'); // Key for queue
    qid = msgget(key, 0666); // Should be created beforehand

    i = msgrcv(qid, &m1, sizeof(m1.buffer), 1, 0);

    for(i = 0; i < MSGSZ; i++)
        printf("%c", m1.buffer[i]);
    printf("\n");
    return 0;
}

