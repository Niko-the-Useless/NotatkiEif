#include <iostream>
#include "multiply.h"

int main(){
	std::cout<<"3*6="<<multiply(3,6)<<std::endl;
	float res=multiply(6.121f,1.55f);
	std::cout<<"6.121*1.55="<<res<<std::endl;
	return 0;
}
