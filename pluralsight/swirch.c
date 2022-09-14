#include <stdio.h>

/**
 * @brief 
 * main - entry point
 * Return: int i = 0
 * 
 */

int main(int argc, char const *argv[])
{
        /* code */
        int number;
        printf("Please enter an interger number: ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
                printf("You entered one. \n");
                break;
        case 10:
                printf("You entered ten. \n");
                break;
        case 64:
                printf("You entered sixty four. \n");
                break;
        default:
                printf("You entered a number different than 1, 10, 64. \n");
                break;
        }

        return 0;
}
