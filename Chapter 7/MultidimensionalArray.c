// 2D array

#include <stdio.h>

int main(){
    // 2 * 3

    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 98;
    marks[0][2] = 95;

    marks[1][0] = 90;
    marks[1][1] = 70;
    marks[1][2] = 69;

    marks[2][0] = 77;
    marks[2][1] = 88;
    marks[2][2] = 99;

    printf("%d", marks[0][1]);
    return 0;
}