#include <unistd.h>
#include <stdio.h>

#define GREET_PARENT	"I'm the parent process!\r\n\r\n"
#define GREET_CHILD		"I'm the child process!\r\n\r\n"
#define HELLO_WORLD		"Hello World! Process ID: %d\r\n"
#define HI_AGAIN		"Hi again! Process ID: %d\r\n"

/*
@brief Simple function that prints a different output depending on the input value.
@param retfork Integer value returned by fork function.
@return Void.
*/
void greet(int retFork)
{
	if (retFork == 0)
	{
		printf(GREET_CHILD);
	}
	else
	{
		printf(GREET_PARENT);
	}
}

int main()
{
	// Fork once.
	int retFork = fork();

	printf(HELLO_WORLD, getpid());

	greet(retFork);

	// Fork again.
	retFork = fork();

	printf(HI_AGAIN, getpid());

	greet(retFork);

	return 0;
}