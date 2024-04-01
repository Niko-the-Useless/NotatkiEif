#include <iostream>

#include "calculator.h"

int main() {
	float x, y, result;
	float oldX=0, oldY=0, oldResult=4;
while(true){
	std::cout << "Type two numbers." << std::endl << "x: ";
	std::cin >> x;
	std::cout << std::endl << "y: ";
	std::cin >> y;
	std::cout << std::endl << "Choose arithmetic operation to be performed:" << std::endl
		<< "0 - addition" << std::endl
		<< "1 - subtraction" << std::endl
		<< "2 - multiplication" << std::endl
		<< "3 - division" << std::endl;
	unsigned int operationValue;
	std::cin >> operationValue;
	Operation operation = static_cast<Operation>(operationValue);
	result = calculate(operation, x, y);

	if(oldX==x && oldY==y && oldResult==result) {
	std::cout<<"exit ";
	return 1;}
	else {
	std::cout << "Operation result equals: " << result << std::endl;
	}

	oldX=x;
	oldY=y;
	oldResult=result;
	}
}
