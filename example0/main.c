//gcc -c main.c
//gcc -c math_utils.c
//gcc main.o math_utils.o -o program

#include <stdio.h>
#include "math_utils.h"

int main() {
    printf("Sum: %d\n", add(2,3));
    return 0;
}