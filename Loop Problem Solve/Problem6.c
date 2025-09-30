#include <stdio.h>

int main(){
    int num ;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("Totoal Number of Divisors: %d\n", count);

    return 0;
}