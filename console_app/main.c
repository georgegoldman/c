#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Tom";
    int characterAge = 67;

    printf("there was once a man named %s. \n", characterName);
    printf("he was %d years old .\n", characterAge);
    printf("He really like the name %s\n", characterName);

    characterAge = 30;
    printf("but don\'t like being %d \n", characterAge);


    return 0;
}
