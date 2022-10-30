src_fork	= Source_files/fork.c
src_exec	= Source_files/exec.c
src_dummy	= Source_files/dummy.c

obj_fork	= Object_files/fork.o
obj_exec	= Object_files/exec.o
obj_dummy	= Object_files/dummy.o

exe_fork	= Executable_files/fork
exe_exec	= Executable_files/exec
exe_dummy	= Executable_files/dummy

all: clean fork.o fork exec.o exec dummy.o dummy

fork.o: $(src_fork)
	gcc -c $(src_fork) -o $(obj_fork)

fork: $(obj_fork)
	gcc $(obj_fork) -o $(exe_fork)

exec.o: $(src_exec)
	gcc -c $(src_exec) -o $(obj_exec)

exec: $(obj_exec)
	gcc $(obj_exec) -o $(exe_exec)

dummy.o: $(src_dummy)
	gcc -c $(src_dummy) -o $(obj_dummy)

dummy: $(obj_dummy)
	gcc $(obj_dummy) -o $(exe_dummy)

clean:
	rm -rf Object_files/* Executable_files/*