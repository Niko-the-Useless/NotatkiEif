#include <stdio.h>
void ECHO (char input){
	printf("%c\n", input);
}

void WRITE (char input){
	FILE *fptr;
	fptr = fopen("output.txt","a");
	fprintf(fptr, "%c", input);
	fclose(fptr);
}
