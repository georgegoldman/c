#include <stdio.h>
#define LOWER 0 //lower limit of table
#define UPPER 300 //upper limit
#define STEP 20

/* printing the fahrenheit-celsius equivalent*/

void main(void)
{
    /*int fahr, celsius;
    int lower, upper, step;

    lower = 0; 
    upper = 300; 
    step = 20; 
    
    fahr = lower;

    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%.2d\t%.2d\n", fahr, celsius);
        fahr = fahr + step;
    }*/
    // int fahr;
    // for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    //     printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}