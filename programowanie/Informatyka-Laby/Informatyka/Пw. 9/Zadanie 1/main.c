#include<stdio.h>
#include"triangle.h"
#include<stdbool.h>
int main(){
	float ax=-20.0;
	float ay=-1.5;

	float bx=100.0;
	float by=0.0;
	
	float cx=2.0;
	float cy=0.0;

	Point_t A = {ax, ay};
	Point_t B = {bx, by};
	Point_t C = {cx, cy};
	Point_t points[3] = {A,B,C};

	bool check=isRightTriangle(points);
	printf("triangle is: %d",check);

}
