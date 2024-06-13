#pragma once
double add (double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
typedef double(*illegalOperationHandler)();
double divide(double x, double y, illegalOperationHandler iOH);
double modulus(double x);
