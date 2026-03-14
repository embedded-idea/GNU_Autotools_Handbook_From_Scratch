#include "multip.h"
#include "val.h"

int multip(int *x, int *y) {
	val(x);
	val(y);
	printf("this is multip \n");
	return (*x) * (*y);
}
