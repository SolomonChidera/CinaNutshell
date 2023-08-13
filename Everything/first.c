#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int first(int n)
{
	while (n >= 10)
	{
		n /= 10;
		return(n);

	}
	return(0);
}

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("n is equal to %d\n", first(n));

	return(0);
}
