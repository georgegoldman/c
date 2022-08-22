#include <stdio.h>

void main(void)
{
    int sum = 0;
    int num;
    printf("please enter a number");
    while((num = getc( stdin )) > 0){
        sum += num;
        printf("%d", num);
    }
    // printf("%d", sum);

}