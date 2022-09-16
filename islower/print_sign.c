#include <string.h>
#include "main.h"

int print_sign(int n)
{
        signed int returnval = 0;
        if (n > 0)
        {
                _putchar('+');
                returnval = +1;
        }
        else if (n < 0)
        {
                _putchar('-');
                returnval = -1;
        }
        else
        {
                _putchar('0');
                returnval = 0;
        }
        return (returnval);
}