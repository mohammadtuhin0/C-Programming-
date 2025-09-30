#include <stdio.h>

int main(){
    int n;
    int y = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            y -= i * i;
        } else {
            y += i * i;
        }
    }
    printf("The value of y = %d\n", y);
    return 0;
}