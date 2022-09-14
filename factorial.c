#include <stdio.h>

/**
 * factorial - compute ! input int
 * Return: int val > 0
 */
int factorial(int n)
{
	int retval = 1;
	if (n != 1)
	{
		retval = n * factorial(n - 1);
	}
	return retval;
}

/**
 * main - entry point
 * Return: int 0
 */
int main(void)
{
	int fn = factorial(4);
	printf("%i\n", fn);
	return (0);
}
