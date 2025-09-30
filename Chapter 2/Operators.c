#include <stdio.h>

int main(){
    int num = 10 + 51;
    printf("%d\n", num);

    int x = 10;
    int y = 3;

    printf("%d\n", x - y);
    printf("%d\n", x / y);
    printf("%d\n", x * y);
    printf("%d\n", x + y);
    printf("%d\n", x % y);

    int n = 23;
    int m = 23;
    if (n == m)
    {
        printf("They are same\n");
    }

    
// Incrementing and Decrementing

    int i = 5;
    ++i;
    printf("%d\n", i);

    --i;
    printf("%d\n", i);

    return 0;
}