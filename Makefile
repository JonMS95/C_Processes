src_fork	= Source_files/fork.c
src_exec1	= Source_files/exec1.c
src_dummy	= Source_files/dummy.c

obj_fork	= Object_files/fork.o
obj_exec1	= Object_files/exec1.o
obj_dummy	= Object_files/dummy.o

exe_fork	= Executable_files/fork
exe_exec1	= Executable_files/exec1
exe_dummy	= Executable_files/dummy

all: clean fork.o fork exec1.o exec1 dummy.o dummy

fork.o: $(src_fork)
	gcc -c $(src_fork) -o $(obj_fork)

fork: $(obj_fork)
	gcc $(obj_fork) -o $(exe_fork)

exec1.o: $(src_exec1)
	gcc -c $(src_exec1) -o $(obj_exec1)

exec1: $(obj_exec1)
	gcc $(obj_exec1) -o $(exe_exec1)

dummy.o: $(src_dummy)
	gcc -c $(src_dummy) -o $(obj_dummy)

dummy: $(obj_dummy)
	gcc $(obj_dummy) -o $(exe_dummy)

clean:
	rm -rf Object_files/* Executable_files/*