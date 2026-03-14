#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include "sum.h"  
#include "multip.h"  
  
int main(int argc, char** argv) {  
    int x = 10;  
    int y = 20;  
    printf("This is Main x=%d y=%d\n",x,y);
    int z = sum(&x, &y);  
    printf("sum :%d\n", z);  
    x = 20;  
    z = multip(&x, &y);  
    printf("multip :%d\n", z);  
    return 0;  
} 