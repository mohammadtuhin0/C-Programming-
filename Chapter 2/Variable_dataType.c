#include <stdio.h>

int main(){
    printf("Hello World!\n");
    int x = 20;
    printf("%d\n", x);

    // For Character: 
    char name = 'A';
    printf("%c\n", name);

    char array[] = "Programmer";
    printf("%s\n", array);

    // Value Change:
    int a = 15;
    a = 16;
    printf("%d\n", a);

    // float type:
    float y = 5.5;
    printf("%.2f\n", y);

    char name1[] = "Tuhin";
    int age = 20;
    printf("My name is %s\nAnd My age is %d\n", name1, age);

    // Calculate the Area of a Rectangle
    // int length = 4;
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    // int width = 6;
    int width;
    printf("Enter the width: ");
    scanf("%d", &width);
    int area;

    area = length * width;
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle: %d\n", area);
    return 0;
}