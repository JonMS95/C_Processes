#include <unistd.h>
#include <stdio.h>

/*
@brief Simple function that prints a different output depending on the input value.
@param retfork Integer value returned by fork function.
@return Void.
*/
void greet(int retFork)
{
	if (retFork == 0)
	{
		printf("I'm the child process!\r\n");
	}
	else
	{
		printf("I'm the parent process!\r\n");
	}
}

int main()
{
	// Fork once.
	int retFork = fork();

	printf("Hello World! Process ID: %d\r\n", getpid());

	greet(retFork);

	// Fork again.
	retFork = fork();

	printf("Hi again! Process ID: %d\r\n", getpid());

	greet(retFork);

	return 0;
}