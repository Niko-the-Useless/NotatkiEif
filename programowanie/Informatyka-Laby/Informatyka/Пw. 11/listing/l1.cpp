#include <stdio.h>

float multiply(float x, float y){
	return x*y;
}

float add(float x, float y) {
	return x+y;
}

int triple (int x, int y, int z){
	return x+y+z;
}

int main() {
	float (*multPtr)(float, float) = multiply;
	float (*addPtr)(float, float) = add;
	
	printf("mult res: %f", multPtr(2.0,3.5));
	printf("add res: %f", addPtr(2.0,3.5));

	multPtr = add;
	printf("add res: %f", multPtr(2.0,3.5));

	int (*triplePtr)(int,int,int)=triple;
	printf("add 3 res: %d", triplePtr(2,3,5));

	return 0;
}
