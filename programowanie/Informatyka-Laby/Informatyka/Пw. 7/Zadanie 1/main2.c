#include<stdio.h>
int main(){
	char input;
	FILE* file = fopen("userInput.txt","w");
	int i=0;
	while((i<20)&&(input!='q'||input!='Q')){
		input=getchar();
		fputc(input,file);
		i++;
	}
	fclose(file);
	return 0;
}
