#ifndef EXEC_H
#define EXEC_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_FORK      "An error ocurred while executing fork\r\n."
#define GREET_PARENT    "Hi there! I'm the parent process, and my PID is %d\r\n\r\n"
#define GREET_CHILD     "Hello! I'm the child process, my PID is %d, and I'm going to do something else!\r\n"
#define PATH_EXEC       "./Executable_files/dummy"
#define NAME_PROCESS    "reverseIntProcess"
#define ARG_EXEC        "1"
#define MSG_AFTER_EXEC  "After exec, the process is no longer following the same execution path as the parent."

#endif