#include <stdio.h>

int main(){
    int n,i;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        sum +=i;
    }
    printf("%d\n", sum);

    for(i = n; i>=1; i--) {
        printf("%d\n", i);
    }
    return 0;
}