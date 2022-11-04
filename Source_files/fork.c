#include "fork.h"

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