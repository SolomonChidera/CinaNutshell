#include <stdio.h>

int main(void)
{
	int n = 12345;
	printf("This is the value of n ==> %d ", n);

	while (n >= 10)
	{
		n /= 10;
	}
	printf("Last digit is %d", n);

	return(0);
}
