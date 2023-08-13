#include <stdio.h>

int main(void)
{
	int n;
	printf("Please enter a number\n");
	scanf("%d", &n);

	while (n >= 10)
	{
		n /= 10;
	}
	printf("Last digit is %d", n);

	return(0);
}
