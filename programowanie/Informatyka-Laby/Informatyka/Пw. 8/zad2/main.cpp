#include<iostream>
#include"arrayTools.h"

int main(){
	int n;

	std::cout<<"podaj rozmiar: ";
	std::cin>>n;

	int* wartosci = array1DGen(n*n);
	int** tablica = array2DGen(n);
	tablica = arrayFill(tablica, wartosci, n);
	arrayReader(tablica,n);
	delete[] tablica;

	return 0;
}
