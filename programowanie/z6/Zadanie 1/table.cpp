#include<iostream>
void printTab(const int* const tab, unsigned int size){
	for(int i=0;i<size;i++){
		std::cout<<tab[i]<<std::endl;
	}
}

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void reverseTab(int* const tab, unsigned int size){
	int *pointer1 = tab, 
      *pointer2 = tab + size - 1; 
    while (pointer1 < pointer2) { 
        swap(pointer1, pointer2); 
        pointer1++; 
        pointer2--; 
    } 
} 

