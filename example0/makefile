program: main.o math_utils.o
	gcc main.o math_utils.o -o program
main.o: main.c math_utils.h
	gcc -c main.c
math_utils.o: math_utils.c math_utils.h
	gcc -c math_utils.c