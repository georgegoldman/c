#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints time
 * Return: void
 */

void jack_bauer(void)
{
        int min = 0, hr = 0, count = 0;
        while (count <= 1440)
        {
                if (min == 37)
                        break;
                if ((count % 60) == 0)
                {
                        min = 0;
                        hr++;
                        count++;
                        continue;
                }
                count++;
                min += 1;
                printf("%3d \n", min);
        // printf("%d:%d \n", hr, min);
        }
}
