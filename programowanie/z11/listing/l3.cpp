#include <iostream>

bool isLess(int x, int y){
	return x<y;
}

bool isGreater(int x, int y){
	return x>y;
}

void swap(int *x, int *y){
	int tmp = *x;
	*x=*y;
	*y=tmp;
}

void bubbleSort(int *tab, unsigned int n, bool (*comparator)(int, int)){
	if (tab!= NULL && comparator !=NULL)
		for(int i=0;i<n-1;++i)
			for(int j=0;j<n-1;++j)
				if (comparator(tab[j], tab[j+1])){
					swap(tab+j, tab+j+1);
				}
}

void printTab(const int *tab, unsigned int tabSize){
	if (tab != NULL){
		for(int i=0;i<tabSize;i++){
			std::cout<<tab[i];
		}
	}
	std::cout<<"\n";
}

int main() {
	const	unsigned int tabSize = 10;
	int tab[tabSize] = {5,-7,1,0,2,1,8,-3,-2,5};
	printTab(tab, tabSize);

	bubbleSort(tab,tabSize, isLess);
	printTab(tab, tabSize);

	bubbleSort(tab, tabSize, isGreater);
	printTab(tab, tabSize);
	return 0;
}
