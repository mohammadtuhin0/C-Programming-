#include <stdio.h>

int main(){
    int sum = 0;
    // for(int i = 63; i <= 600; i += 63)
    // {
    //     printf("%d\n", i);
    //     sum += i;
    // }
    // printf("Sum off numbers: %d\n", sum);

    int i = 63;
    while (i <= 600){
        printf("%d\n", i);
        sum += i;
        i += 63;
    }
    printf("Sum off numbers: %d\n", sum);
    return 0;
}