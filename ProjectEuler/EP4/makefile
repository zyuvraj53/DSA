assembly: code.c
	gcc -S -o code.c $@.opt1.s

pre: code.c
	gcc -E code.c > pre.c