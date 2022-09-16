#include "main.h"

int print_last_digit(int i)
{
        int ld = i % 10;

        if(ld < 0)
                ld *= -1;
        _putchar('0' + ld);
        return (ld);
}