#include <stdio.h>
#include <string.h>

/**
 * @brief 
 * main - entry point
 * Return: int x = 0
 * 
 */

int main(int argc, char const *argv[])
{
        /* code */
        char answer[10];

        int i = 0;

        do {
                i++;
                printf("Iteration #%d \n", i);

                printf("Do you want to continue? [Enter No to quit]: ");
                scanf("%9s: ", answer);
        }while (strcmp(answer, "no") != 0);

        return 0;
}
