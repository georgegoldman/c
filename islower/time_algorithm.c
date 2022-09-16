#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints time
 * Return: void
 */

void time_algorithm(void)
{
        int min = 0, hr = 0, count = 0;
        while (count <= 1440)
        {
                if ((count % 60) == 0 && count >= 60)
                {
                        min = 0;
                        hr++;
                        count++;
                        continue;
                }
                count++;
                min += 1;
                printf("%02d:%02d \n", hr, min);
        }
}
