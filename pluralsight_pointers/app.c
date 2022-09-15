#include <stdio.h>

/**
 * @brief 
 * Swap - swap values
 * Return: void
 * 
 */

void Swap(int *a, int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

/**
 * @brief 
 * main - entry point
 * Return: int
 * 
 */

int main(int argc, char const *argv[])
{
        /* code */
        int x = 10;
        int y = 20;

        printf("Initial values: \n x = %d; y = %d \n\n", x, y);

        Swap(&x, &y);
        printf("value after calling Swap: \n x = %d; y = %d \n", x, y);

        return 0;
}
