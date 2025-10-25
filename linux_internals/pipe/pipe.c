#include <stdio.h>
#include <unistd.h>

int main() {
	int fds[2];
        int res, i;
        char *buf1 = "Sofia joys";
        char buf2[13];

        res = pipe(fds); 

        printf("Return value of pipe is: %d\n", res);

        write(fds[1], buf1, 11);  
        read(fds[0], buf2, 11);  

        for (i = 0; i < 13; i++)
         {
            printf("%c", buf2[i]);
         }
        printf("\n");
}
