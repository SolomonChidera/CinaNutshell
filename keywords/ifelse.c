#include "main.h"

/**
 * FileName: ifelse.c
 * Author: Solomon Chidera
 * What it does: How the if-else statment in C works [syntax]
 */

int main(void)
{
	int num = 10;/*a variable called num with the value of 10*/
	if (num == 20)
	{
		printf("Yes Num is 20\n");
	}
	else if (num > 10)
	{
		printf("num is greater than 10 man");
	}
	else if (num <= 10)
	{
		printf("correct num is less than and it's equal to 10");
	}
	
	return(0);
}
