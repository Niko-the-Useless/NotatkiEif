#include<iostream>

void incrementVal(int& valRef){
	++valRef;
}

int main(){
	int val = 111;
	incrementVal(val);
	std::cout<<val<<std::endl;
	return 0;
}
