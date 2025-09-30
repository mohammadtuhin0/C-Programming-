#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age > 18) {
        printf("Adult\n");
        printf("They can vote \n");
        printf("They can drive\n");
    } else {
        printf("Not adult\n");
    }
    printf("Thank you");

    // Nested if condition 

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("Possitive\n");
        if(number % 2 == 0) {
            printf("Even\n");
        } else {
            printf("odd\n");
        }
    } else {
        printf("Negative\n");
    }

 ////////////////////////
     int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks <= 30) {
        printf("fail\n");
    } else if(marks > 30 && marks <=100) {
        printf("Pass \n");
    } else {
        printf("Wrong marks");
    }
    return 0;
}