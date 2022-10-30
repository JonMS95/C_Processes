#include <unistd.h>
#include <stdio.h>

int main()
{
    execlp("ls", "-al", NULL);

    printf("After exec\r\n");
}