#include <stdio.h>

int main(){
    int num, i;
    int total = 0;
    int countOdd = 0;
    float avg = 0;

    printf("Enter 10 number: \n");

    for ( i = 1; i <= 10; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if(num % 2 != 0)
        {
            total += num;
            countOdd++;
        }
    }
    if(countOdd > 0) {
        avg = (float) total / countOdd;
        printf("Total off odd number: %d\n", total);
        printf("Avg of odd numbers: %.2f\n", avg);
    } else {
        printf("No odd number !");
    }
    
    return 0;
}