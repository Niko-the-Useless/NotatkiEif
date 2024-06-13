#include<stdio.h>
#include<math.h>
#include"zeros.h"

void Zeros(float a, float b, float c) 
{
	float res1=0;
	float res2=0;
	float delta=0;
	delta = 4*a;
	delta = (b*b)-delta*c;
	delta = sqrt(delta);
	res1=(delta-b)/(2*a);
	res2=(0-b-delta)/(2*a);

	if(res1==res2) 
	{
		printf("1 miejsce zerowe: %f \n", res1);
	}
	else
	{
		printf("2 miejsca zerowe: %f, %f \n", res1, res2);
	}
}
