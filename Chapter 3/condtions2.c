#include <stdio.h>

int main(){
    int age ;
    printf("Enter your number: ");
    scanf("%d", &age);

    if(age > 18) {
        printf("Adult\n");
    }
    else if ( age > 13 && age <18) {
        printf("Teenager");
    } else {
        printf("Child");
    }
    
    return 0;
}