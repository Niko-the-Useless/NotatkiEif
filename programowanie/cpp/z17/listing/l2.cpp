#include<iostream>

int main(){
	int x;
	int val = 3;
	int &ref=val;
	int &y=x;
	int* ptr = &val;

	float g = 3.4;
	float* w =  &g;
	
	std::cout<<*ptr<<std::endl;
	std::cout<<(float)*ptr<<std::endl;
	std::cout<<*w;
	
	long* ptrCast = (long*)ptr;

	ref = val;
	return 0;
}
