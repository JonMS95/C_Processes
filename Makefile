src_fork	= Source_files/fork.c
src_exec	= Source_files/exec.c
src_dummy	= Source_files/dummy.c

exe_fork	= Executable_files/fork
exe_exec	= Executable_files/exec
exe_dummy	= Executable_files/dummy

all: directories clean fork exec dummy msg

directories:
	./directories.sh

fork: $(src_fork)
	gcc $(src_fork) -o $(exe_fork)

exec: $(src_exec)
	gcc $(src_exec) -o $(exe_exec)

dummy: $(src_dummy)
	gcc $(src_dummy) -o $(exe_dummy)

clean:
	rm -rf Object_files/* Executable_files/*

msg:
	@echo "Don't forget to call exec from 'C_Processes' directory!"