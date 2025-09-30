#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    // if(x % 2 == 0)
    // {
    //     printf("This is Div");
    // } else{
    //     printf("This is not Div");
    // }


    int isSunday = 1;
    int isSnowing = 1;
    printf("%d", isSunday && isSnowing);


    int y;
    printf("Enter number: ");
    scanf("%d", &y);
    printf("%d \n", x>9 && x<100);


    // Write a program to calculate area of a circle 
    float radius;
    printf("Enter Radius : ");
    scanf("%f", &radius);

    printf("Area is : %.2f", 3.14 * radius * radius);
    return 0;
}