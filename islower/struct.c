#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief struct
 * 
 */

struct Student
{
        char name[50];
        char major[50];
        int age;
        double gpa;
};

void struct_fn(void)
{
        /* code */
        struct Student student1;
        student1.age = 25;
        student1.gpa = 3.8;
        strcpy(student1.name, "jim");
        strcpy(student1.major, "maths");
        
        printf("%f\n", student1.gpa);
}
