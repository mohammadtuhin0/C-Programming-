// Collection of similar data types stored at contiguous memory locations. 


#include <stdio.h>

int main(){
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 89;

    int marks[3];
    printf("Enter phy: ");
    scanf("%d", &marks[0]);

    printf("Enter chem: ");
    scanf("%d", &marks[2]);

    printf("Enter math: ");
    scanf("%d", &marks[3]);

    printf("Phy = %d, Chem = %d, Math = %d", marks[0], marks[1], marks[2]);

    return 0;
}