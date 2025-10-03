// Ask the user to enter their firstName & print it back to them.
// also try this with their fullName.

#include <stdio.h>

int main(){
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("First Name: %s", firstName);

    // char str[100];
    // gets(str);
    // puts(str);

    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}