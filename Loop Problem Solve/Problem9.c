#include <stdio.h>

int main(){
    int m, n;

    printf("Enter height (M) and length (N): ");
    scanf("%d %d", &m, &n);

    for(int i=1; i<= m; i++){
        for(int j = 1; j<= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}