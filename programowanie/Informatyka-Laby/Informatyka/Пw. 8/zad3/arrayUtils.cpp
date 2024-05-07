char* resizeArray(char* array, unsigned int newSize){
	char* newArr = new char [newSize];
	for(int i=0;i<sizeof(array);i++){
		newArr[i]=array[i];
	}
	return newArr;
}
