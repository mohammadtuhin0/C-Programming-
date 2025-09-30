#include <stdio.h>

int main(){
    int n;
    printf("Number: ");
    scanf("%d", &n);
    // if(n == 0) {
    //     printf("0\n");
    // } else {
    //     while(n != 0) {
    //         printf("%d\n", n % 10);
    //         n = n / 10;
    //     }
    // }

    if (n == 0) {
        printf("0\n");
    } else {
        for ( ; n != 0; n = n / 10 ) {
            printf("%d\n", n % 10);
        }
    }

    return 0;
}