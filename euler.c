#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	double y0, step_size;
	y0 = atof(argv[1]);
	step_size  = atof(argv[2]);
	printf("initial value: %f, step-size: %f\n", y0, step_size);
}
