#include<stdio.h>
int main(){
	char input;
	FILE* file = fopen("userInput.txt","w");
	for(int i=0;i<20;i++){
		input=getchar();
		if (input=='q'||input=='Q'){fputc(input ,file);break;}
		fputc(input,file);
	};
	fclose(file);
	return 0;
}
