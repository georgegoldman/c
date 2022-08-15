#include <stdio.h>
#include <stdbool.h>

void main()
{
    long count;

    count = 0;
    char words;
    while((words = getchar()) != EOF){
        count++;
        for(int i=0; words == ' ' || (words == ' ' && words == ' '); i++){
            words = ' ';
            putchar(words);
        }
    }
}