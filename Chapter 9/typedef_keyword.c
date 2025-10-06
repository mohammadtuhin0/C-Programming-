#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceEngineering {
    int roll;
    char name[100];
    float cgpa;
} cse;

int main(){
    cse s1;
    s1.cgpa = 3.99;
    s1.roll = 56;
    strcpy(s1.name, "Rifat");

    printf("Student name: %s", s1.name);
    return 0;
}