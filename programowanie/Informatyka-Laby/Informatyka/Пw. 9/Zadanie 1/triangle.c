#include<stdbool.h>
#include<math.h>

typedef struct Point {
	double x, y;
} Point_t;


double powLenght(Point_t first, Point_t second){
	return (second.x-first.x)*(second.x-first.x)+(second.y-first.y)*(second.y-first.y);

}

bool isRightTriangle(Point_t points[3]){
	Point_t A=points[0];
	Point_t B=points[1];
	Point_t C=points[2];

	double a=fabs(powLenght(A, B));
	double b=fabs(powLenght(A, C));
	double c=fabs(powLenght(B, C));

	return (a+b==c || a+c==b || b+c==a);
}

