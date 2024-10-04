#include<iostream>

int* array1DGen(int rozmiar){
	int* liczby=new int[rozmiar];
	
	std::cout<<"podaj :"<<rozmiar<<" liczb \n";
	for(int i=0;i<rozmiar;i++){
		liczby[i]=0;
	}
	return liczby;	
}

int** array2DGen(int rozmiar){
		int** array2D = new int*[rozmiar];

		for (size_t i=0;i<rozmiar;i++){
			array2D[i]= new int[rozmiar];
		}
		return array2D;
}

int** arrayFill(int** array2D, int* liczby,int rozmiar){
		int iteracja=0;
		for(int row=0;row<rozmiar;row++){
			for(int col=0;col<rozmiar;col++){
				array2D[row][col]=(row+1)*(col+1);
				iteracja++;
			}
		}
		return array2D;
}

void arrayReader(int** array2D, int rozmiar){
		for(int row=0;row<rozmiar;row++){
			for(int col=0;col<rozmiar;col++){
				std::cout<<array2D[row][col]<<" ";
			}
			std::cout<<"\n";
		}
}


