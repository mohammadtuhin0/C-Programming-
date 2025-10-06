#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {66, 3.44, "Janina "};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1) {
    printf("Student roll = %d\n", s1.roll);
    printf("Student name: %s\n", s1.name);
    printf("Student cgpa= %.2f\n", s1.cgpa);

}