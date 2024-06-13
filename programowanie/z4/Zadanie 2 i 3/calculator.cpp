#include <iostream>

#include "calculator.h"

namespace {
	
	void quitWithError() {
		std::cout << "Invalid operation performed" << std::endl;
		exit(EXIT_FAILURE);
	}
	
} // anonymous namespace
float add (float x, float y) {return x+y;}

float subtract (float x, float y) {return x-y;}

float multiply (float x, float y) {return x*y;}

float divide (float x, float y) {
	if (y==0){quitWithError();}
	return x/y;
}

float calculate (Operation operacja, float x, float y){
	switch (operacja) {
		case Operation::ADD: return add(x,y);
		case Operation::SUBTRACT: return subtract(x,y);
		case Operation::MULTIPLY: return multiply(x,y);
		case Operation::DIVIDE: return divide(x,y);
		default: quitWithError();
	}
	return 1;
}
