// Write a program to store the data of 3 students.
#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];

};
int main(){
    struct student s1;
    s1.cgpa = 3.50;
    strcpy(s1.name, "Tasin");
    s1.roll = 52;

    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.name);
    printf("Student cgpa: %.2f\n", s1.cgpa);

    struct student s2;
    s2.cgpa = 3.75;
    s2.roll = 50;
    strcpy(s2.name, "Jony");

    printf("Student name: %s\n", s2.name);
    printf("Student roll: %d\n", s2.roll);
    printf("Student cgpa: %.2f\n", s2.roll);
    return 0;
}