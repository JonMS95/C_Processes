#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>

int main()
{
    execlp("./Executable_files/dummy", "reverseIntProcess", "1", NULL);

    printf("After exec\r\n");
}