#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

        pid_t p = fork();
        if(p >=1)
        {
                        printf("parent process pid %d\n",getpid());
                        printf("PARENT: My child's PID is %d.\n", p);
			sleep(3);
        }
        else if(p ==0)
	{
		printf("child exiting \n");
	}
                
   }

