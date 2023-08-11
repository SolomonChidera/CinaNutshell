#include "main.h"

/**
 * fileName:mcircle.c
 * Author: solomon
 * what it does: calls the function in circle.c file
 */

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
