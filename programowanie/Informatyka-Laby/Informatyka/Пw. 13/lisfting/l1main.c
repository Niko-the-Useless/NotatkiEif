#include <stdio.h>
#include <stdlib.h>
#include "l1.h"

double onDivisionByZero(){
	printf("illegal operation \n");
	return 0.0;
}

int main() {
	double divident, divisor;
	printf("put divident");
	scanf("%lf", &divident);
	printf("put divisor");
	scanf("%lf", &divisor);
	printf("quotient equals: %lf", divide(divident, divisor, onDivisionByZero));
	return EXIT_SUCCESS;
}
