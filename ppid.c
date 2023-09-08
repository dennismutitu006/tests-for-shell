#include <stdio.h>
#include <unistd.h>
/*
 * main - check code for ppid.
 * Return: Always 0.
 */
int main()
{
	pid_t ppid;

	ppid = getppid();
	printf("my parent id is: %u\n", ppid);
	return(0);
}
