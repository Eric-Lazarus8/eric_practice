#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

	pid_t p = fork();
	int i =1;
   while(1)
   {

	if(p == 0)
		printf("%d child process id %d\n",i,getpid());

	else if(p >=1)
	{
			printf("%d parent process pid %d\n",i,getpid());
			printf("%d PARENT: My child's PID is %d.\n",i, p);
	}
	else
		printf("error\n");
               sleep(2);	
                i++;
   }
}

