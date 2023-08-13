#include <stdio.h>

int main(void)
{
	int n, a;
	printf("Please enter a number\n");
	scanf("%d", &n);
	a = n;

	while (n >= 10)
	{
		n /= 10;
	}
	printf("First digit of %d is %d", a, n);

	return(0);
}
