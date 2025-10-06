// A collection of values of different data types.
// Example :
// For a student store the following:
//     name(String)
//     roll no(integer)
//     cgpa(float)


// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };


#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];

};
int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 2.99;
    // s1.name= "Tuhin";
    strcpy(s1.name, "Tuhin");

    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student Cgpa: %.2f\n", s1.cgpa);
    return 0;
}