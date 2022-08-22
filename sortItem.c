#include <stdio.h>


void sortItem(int x, int y, int z)
{
    int numbersInOrder[3];
    numbersInOrder[0] = x, numbersInOrder[1] = y, numbersInOrder[2] = z;
    for(int i = 0; i >= 0; i++) {
        if(numbersInOrder[0] == i){
            printf("hey");
        }else {}
    }
    printf("\n");
}

void main(void)
{
    sortItem(2,5,1);
}