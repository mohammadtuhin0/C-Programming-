#include <stdio.h>

int main(){
    int n, i, num;
    int max, mini;
    int sum = 0;
    float avg;
    
    printf("How many numbers: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid quantity.\n");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);

    max = num;
    mini = num;
    sum = num;

    for(i = 2; i<= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;

        if (num > max) {
            max = num;
        }
        if ( num< mini) {
            mini = num;
        }
    }

    avg = (float) sum / n;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", mini);
    printf("Average : %.2f\n", avg);
    return 0;
}