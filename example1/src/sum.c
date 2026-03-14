#include "sum.h"
#include "val.h"
 
int sum(int *x, int *y) {
	val(x);
	val(y);
	puts("This is SUM Method!");
	return *x + *y;
}
