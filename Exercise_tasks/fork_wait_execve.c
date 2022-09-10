#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork, wait and execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child, my_pid;
	int adrs;	
	child = fork();
	my_pid = getpid();

	if (child >= 0)
	{
		wait(&adrs);
                printf("%u\n", my_pid);

		for (child = 0; child <= 5; child++)
		{
			execve(argv[0], argv, NULL);
  	
		}
	}
	else
	{       	
		perror("Not available");
	}
        return (0);
}
