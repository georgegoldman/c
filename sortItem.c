#include <stdio.h>


void sortItem(int x, int y, int z)
{
    if(x > y) {
        if(x < z){
            printf("%d, %d, %d", y, x, z);
        }else{
            if(z>y){
                printf("%d, %d, %d", y, z, x);
            }else{
                printf("%d, %d, %d", z, y, x);
            }
        }
    }else{
        if(y<z){
            printf("%d, %d, %d", x,y,z);
        }
        else{
            if(x > z){
                printf("%d, %d, %d", z, x, y);
            }else {
                printf("%d, %d, %d", x, z, y);
            }
        }
    }
    printf("\n");
}

void main(void)
{
    sortItem(5,5,1);
}