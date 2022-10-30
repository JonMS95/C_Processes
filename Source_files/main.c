#include <unistd.h>
#include <stdio.h>

int main()
{
	int retFork = fork();

	printf("Hello World! Process ID: %d\r\n", getpid());

	if (retFork == 0)
	{
		printf("I'm the child process!\r\n");
	}
	else
	{
		printf("I'm the parent process!\r\n");
	}

	return 0;
}