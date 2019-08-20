#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(double t, double y);

int main(int argc, char **argv) {
    int i;
    double y0, t0, h;
    double yk, y_prev, t_prev;
    y0 = atof(argv[1]);
    t0 = atof(argv[2]);
    h  = atof(argv[3]);
    printf("y0: %f, t0: %f h: %f\n", y0, t0, h);

    printf("Approximated values:\n");
    printf("y(0) = %f\n", y0);
    y_prev = y0;
    t_prev = t0;
    for (i = 1; i < 7; i++) {
        yk = y_prev + func(t_prev, y_prev) * h;
	y_prev = yk;
	t_prev = h * i;
        printf("y(%f) = %f\n", t_prev, yk);
    }
}

double func(double t, double y) {
    return 2 - exp(-4 * t) - 2 * y; 
}
