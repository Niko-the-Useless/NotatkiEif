#include<iostream>
#include"tabUtils.h"
#include<stdlib.h>
int main(){
	int tab[9];
	for(int i=0;i<9;i++){
		tab[i]=rand()%10;
	}

	printTab(tab,9);
	reverseTab(tab,9);
	std::cout<<std::endl<<"-----------"<<std::endl;
	printTab(tab,9);

	return 0;
}
