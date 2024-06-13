#include "reader.h"
#include "state.h"
#include <stdio.h>

typedef enum status {
	echo,
	write,
} state;

void exec() {
	char input;
	state currentStatus = echo; 
	while (1) {
	printf("daj input: \n");
	input = readChar();
		switch (currentStatus) {
			case echo:
				switch (input){
					case 'w':
						currentStatus=write;
						break;
					case 'e':
						currentStatus=echo;
						break;
					case 'q':
						return;
					default:
						ECHO(input);
						break;
				}
			case write:
				switch (input){
					case 'w':
						currentStatus=write;
						break;
					case 'e':
						currentStatus=echo;
						break;
					case 'q':
						return;
					default:
						WRITE(input);
						break;
				}
		}
	}
	}
