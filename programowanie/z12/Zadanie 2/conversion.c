#include"conversion.h"
#include<stdio.h>
void decimalToBinary (unsigned int number)
{	
	if (number!=0)
	{
		printf("%i",number%2);
		decimalToBinary(number/2);
	}
	else
	{
		printf("\n done.\n");
	}
	}

