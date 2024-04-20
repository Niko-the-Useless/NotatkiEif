#include "fib.h"

int fibonacci(unsigned int n) {
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int iterFib (unsigned int n) {
	int a=0,b=1,c;
	if (n==0) return a;
	for (int i=0;i<n;i++) {
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
