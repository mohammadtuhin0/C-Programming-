#include <stdio.h>

int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper case" );
    } 
    else if(ch >= 'a' && ch <= 'z') {
        printf("lower case\n");
    } else {
        printf("Not English Latter\n");
    }
    return 0;
}