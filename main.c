#include <stdio.h>

/**
 * main - entry point
 * Return: int = 0
 */

int main(int argc, char *argv[])
{
	char *name1 = "Brice";
	printf("%s\n\n", name1);

	char *name2 = name1;

	printf("name1 --> %p\n", name1);
	printf("name2 --> %p\n\n", name2);

	name2 += 2;

	printf("name1 --> %p\n", name1);
	printf("name2 --> %p\n\n", name2);

	*name2 = 'y';

	printf("%s\n", name1);

	return (0);
}
