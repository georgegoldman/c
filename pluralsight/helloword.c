#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Return: int 0
 */

int main(int argc, char const *argv[])
{
        /* code */
        printf("What is your name? ");

        char name[40];
        scanf("%39s", name);

        /**
         * @brief 
         * buildinf a message using this method
         * 
         */

        char message[100];
        strcpy(message, name);
        strcat(message,  " is ");
        strcat(message, "learning C");

        puts(message);
        printf("this is the size --> %d \n this is the length --> %d \n", sizeof(message), strlen(message));
        return 0;
}
