#include<iostream>

float algo(float res, int num, int iter){
		for(int i=0;i<iter;i++){
		res=(res+(num/res))/2;
	}
	return res;
}

int main(){
	std::cout<<"wynik: "<<algo(1,10,1000);
	return 0;
}

