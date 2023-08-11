#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main - Entry point of a program
 *Description: A program that declare a 3D integer arrays and take
 *              input from the user
 *              using a pointer to store the memory address
 *              and to dereference it
 *Return: Always(success)
 */
int main(void)
{
	int arr[2][2][2];
	int i, j, n;
	char *str = "Enter the array elements : ";
	size_t size = strlen(str);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (n = 0; n < 2; n++)
			{
				write(STDOUT_FILENO, str, size);
				scanf("%d %d %d", &arr[i][j][n], &arr[i][j][n], &arr[i][j][n]);
			}
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (n = 0; n < 2; n++)
			{
				putchar(arr[i][j][n] + '0');
			}
			putchar('\n');
		}
		putchar('\n');
	}
	return (0);
}
