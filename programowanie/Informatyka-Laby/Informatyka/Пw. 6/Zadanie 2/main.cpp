#include<iostream>
#include"convertCase.h"
int main(){
	int size;
	std::cout<<"size";
	std::cin>>size;
	char array[size];
	
	for(int i=0;i<=size;i++){
		array[i]=getchar();
	}
	convertCase(array);

	return 0;
}
