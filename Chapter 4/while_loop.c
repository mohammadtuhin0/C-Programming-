#include <stdio.h>

int main(){
    int i = 1;
    while(i <= 5) {
        printf("Hello world\n");
        i++;
    }

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int j=0;
    while(j <= n) {
        printf("%d\n", j);
        j++;
    }
    return 0;
}