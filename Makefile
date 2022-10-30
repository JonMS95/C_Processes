src_fork	= Source_files/fork.c

obj_fork	= Object_files/fork.o

exe_fork	= Executable_files/fork

all: clean fork.o fork

fork.o: $(src_fork)
	gcc -c $(src_fork) -o $(obj_fork)

fork: $(obj_fork)
	gcc $(obj_fork) -o $(exe_fork)

clean:
	rm -rf Object_files/* Executable_files/*