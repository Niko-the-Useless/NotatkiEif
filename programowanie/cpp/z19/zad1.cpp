#include <cstdlib>
#include<iostream>
#include<stdlib.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]); 
} 
int median(int* array){
	int size=sizeof array;
	int workArr[size];
	for(int i=0;i<=size;i++){
		workArr[i]=array[i];
	}
	bubbleSort(workArr, size);
	if(size%2==0){return workArr[size/2];}
	else {return workArr[(size-1)/2];}

	cout<<"I shouldnt be here";	
	return 2137;
}

int main(){
	int arr[5]={5,0,9,1,4};
	cout<<"mediana: "<<median(arr);
	return 0;
}
