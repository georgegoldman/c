#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 3;
    int zero = 0;
    while(n > zero){
        sum += n;
    }

    printf("%d\n", sum);
}