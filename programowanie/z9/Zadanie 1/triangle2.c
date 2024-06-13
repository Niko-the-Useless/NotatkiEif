#include<stdbool.h>
#include<math.h>

typedef struct Point {
	double x, y;
} Point_t;

bool isRightTriangle(Point_t points[3]){
	double a=(points[1].x-points[0].x)*(points[1].x-points[0].x)+(points[1].y-points[0].y)*(points[1].y-points[0].y);
	double b=(points[2].x-points[1].x)*(points[2].x-points[1].x)+(points[2].y-points[1].y)*(points[2].y-points[1].y);
	double c=(points[2].x-points[0].x)*(points[2].x-points[0].x)+(points[2].y-points[0].y)*(points[2].y-points[0].y);
	a=fabs(a);
	b=fabs(b);
	c=fabs(c);

	return (a+b==c || a+c==b || b+c==a);
}

