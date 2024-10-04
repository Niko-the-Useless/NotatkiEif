#include <iostream>
#include "gcd.h"

int main(){
	std::cout<<"iteracyjnie 3 i 6: "<<iterGcd(3,6)<<std::endl;
	std::cout<<"rekurencyjnie 3 i 6: "<<recurGcd(3,6)<<std::endl;
	return 0;
}
