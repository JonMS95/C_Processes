#ifndef FORK_H
#define FORK_H

#include <unistd.h>
#include <stdio.h>

#define GREET_PARENT	"I'm the parent process!\r\n\r\n"
#define GREET_CHILD		"I'm the child process!\r\n\r\n"
#define HELLO_WORLD		"Hello World! Process ID: %d\r\n"
#define HI_AGAIN		"Hi again! Process ID: %d\r\n"

#endif