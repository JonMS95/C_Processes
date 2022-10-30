src_main	= Source_files/main.c

obj_main	= Object_files/main.o

exe_main	= Executable_files/main

all: clean main.o main

main.o: $(src_main)
	gcc -c $(src_main) -o $(obj_main)

main: $(obj_main)
	gcc $(obj_main) -o $(exe_main)

clean:
	rm -rf Object_files/* Executable_files/*