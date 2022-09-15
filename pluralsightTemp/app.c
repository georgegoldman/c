#include <stdio.h>

/**
 * @brief 
 * celsiusFromFahrenheit - temp converter
 * Return: float x
 * 
 */

float celsiusFromFahrenheit(float temperatureF)
{
        float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;

        return temperatureC;
}

/**
 * @brief 
 * main - entry point
 * Return: int 0
 * 
 */

int main(int argc, char const *argv[])
{
        /* code */
        puts("Temperature Conversion Table");
        puts("============================");
        
        for (float tempF = 10.0; tempF < 100.0; tempF += 5.0)
        {
                /* convert the temp from fahrenheit to celsius */
                float tempC = celsiusFromFahrenheit(tempF);
                
                /* Print a single row with temperature values aligned */
                printf("%.1f F  | %5.1f c \n", tempF, tempC);

        }
        puts("------------------------");

        return 0;
}

