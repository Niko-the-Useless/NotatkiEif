#include "conversion.h"
#include<stdio.h>
int main()
{
	printf("In reverse notation: \n");
for (int i=1;i<16;i++)
	{
		printf("%i:",i);
		decimalToBinary(i);
	}
	return 0;
}
