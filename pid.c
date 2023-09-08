#include <stdio.h>
#include <unistd.h>
/**
 * main - get pid
 * Return: 0
 */
int main()
{
	pid_t pid;

	pid = getpid();
	printf("my current pid is: %u\n", pid);
	return (0);
}
