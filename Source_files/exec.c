#include "exec.h"

int main()
{
    int retfork = fork();

    if(retfork < 0)
    {
        perror(ERROR_FORK);
    }

    int PID = getpid();

    if(retfork != 0)
    {
        printf(GREET_PARENT, PID);
    }
    else
    {
        printf(GREET_CHILD, PID);

        int execStatus = execlp(PATH_EXEC, NAME_PROCESS, ARG_EXEC, NULL);
        /*
        Although it's known that execlp returns a non-zero integer if any error happens,
        it's not going to be handled yet, as it's related to pipes, which are going to
        be studied on another tutorial.
        */

        printf(MSG_AFTER_EXEC);
    }

    return 0;
}