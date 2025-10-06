#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

int main(){
    struct student ece[100];
    ece[0].roll = 49;
    ece[0].cgpa = 3.33;
    strcpy(ece[0].name, "Sabab");

    printf("name = %s\n", ece[0].name);
    printf("Roll = %d\n", ece[0].roll );
    printf("CGPA = %.2f", ece[0].cgpa);
    return 0;
}