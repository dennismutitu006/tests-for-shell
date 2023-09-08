#include <stdio.h>
#include <unistd.h>
/**
 * main - fork.c
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork call\n");
	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
	}

	printf("After fork call\n");
	my_pid = getpid();

	printf("My pid is: %u\n", my_pid);
	return (0);
}
