#include "main.h"

/**
 * fileName: circle.c
 * what it does: Calculate and print the area of circles
 */

double circularArea(double r);

int main(void)
{
	double radius = 1.0, area = 0.0;

	printf("   Areas of circle\n\n");
	printf("    Radius         Area\n"
		"-----------------------\n");

	area = circularArea(radius);
	printf("%10.1f     %10.2f\n", radius, area);

	radius = 5.0;
	area = circularArea(radius);
	printf("%10.1f     %10.2f\n", radius, area);

	return(0);

}
double circlarArea(double r)
{
	const double pi = 3.1415926536;
	return(pi * r * r);
}
