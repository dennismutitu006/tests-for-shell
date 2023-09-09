#include <stdio.h>
#include <unistd.h>
/**
 * main - a fork call.
 * Return: 0 always.
 */
int main(void)
{
        pid_t pid;
        printf("Before the fork was called\n");
        
	fork();
        if (pid == -1)
        {
                perror("Fork failed:");
                return (1);
        }
        printf("Now fork has happened  i am two\n");
        return (0);
}
