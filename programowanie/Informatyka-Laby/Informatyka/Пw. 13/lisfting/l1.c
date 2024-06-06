#include "l1.h"
double add(double x, double y) {
	return x+y;
}
double subtract(double x, double y){
	return x-y;
}
double multiply(double x, double y){
	return x*y;
}
double divide(double x, double y, illegalOperationHandler iOH){
	if(x==0)
		return iOH();
	else {
		return x/y;
	}
}
double modulus(double x){
	return x<0 ? -x:x;
}
