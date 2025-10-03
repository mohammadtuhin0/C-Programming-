#include <stdio.h>
# include <string.h>

int main(){
    // char name[] = "Mohammad";       
    // int length = strlen(name);                // strlen()
    // printf("Length is : %d", length);

    // char oldStr[] = "OldStr";
    // char newStr[] = "newStr";
    // strcpy(newStr, oldStr);                      // strcpy()
    // puts(newStr);


    // char firstStr[100] = "Hello ";
    // char secString[] = "World";
    // strcat(firstStr, secString);                    //strcat()
    // puts(firstStr);


    char firstStr[] = "Apple";
    char secString[] ="Banana";

    printf("%d", strcmp(secString, firstStr));
    return 0;
}