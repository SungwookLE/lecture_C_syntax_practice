#include <stdio.h>

double Adddata(double, double);
double Subdata(double, double);
void Control_func(double (*func)(double, double), double a, double b);

int main(void) {
	double db1 = 5.8;
	double db2 = 3.2;

	Control_func( Adddata, db1, db2);
	Control_func( Subdata, db1, db2 );

	return 0;
}

// function pointer usage example
void Control_func( double (*func)(double, double) , double a, double b) {
	double res;
	res=func(a, b);

	res *= 5.1;

	printf("results: %llf\n", res);


}

double Adddata(double a, double b) {


	return a + b;
}

double Subdata(double a, double b) {

	return a - b;
}

