#include <stdio.h>

/**
 * main - entry point
 * Return: int = 0
 */

int main(int argc, char argv[])
{
	int num1[] = {1, 2, 3, 4, 5};

	int *num2 = num1;

	printf("num1 --> %p\n", num1);
	printf("num2 --> %p\n\n", num2);


	num2 += 2;

	printf("num1 --> %p\n", num1);
	printf("num2 --> %p\n\n", num2);

	*num2 = 100;

	for (int i = 0; 1 < 5; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n");

}
