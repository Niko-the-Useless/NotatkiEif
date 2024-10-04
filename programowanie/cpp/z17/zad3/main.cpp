#include"arrayUtils.h"
#include<iostream>
int main(){
	unsigned int size = 4;
	unsigned int newSize = 8;

	char* array = new char [size];
	for(int i=0;i<size;i++){
		array[i]='a'+i;
	}

	for(int i=0;i<size;i++){
		std::cout<<array[i];
	}

	array=resizeArray(array,newSize);
	std::cout<<"\n ";	
	for(int i=0;i<size;i++){
		std::cout<<array[i];
	}

	delete[] array;
	
	return 0;
}
