#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    double gpa;
    printf("Enter your gps: ");
    scanf("%lf", &gpa);
    printf("you gpa is  %f", gpa);
    */

    /*
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);
    */
    char name[20];
    printf("Enter your grade: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}
