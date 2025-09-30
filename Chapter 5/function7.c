// Write functions to calculate area of a square, a circle and a rectangle

#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main(){
    float a = 5.0;
    float b = 10.0;
    printf("Area is : %.2f\n", rectangleArea(a, b));

    float side = 12.0;
    printf("Square Area: %.2f\n", squareArea(side));

    float rad = 7.0;
    printf("Cirecle Area: %.2f\n", circleArea(rad));
    return 0;
}

float squareArea(float side) {
    return side * side;
}
float circleArea(float rad) {
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b) {
    return a * b;
}