#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (n >= 10)
		n /= 10;
	printf("First digit is %d", n);

	return (0);
}
