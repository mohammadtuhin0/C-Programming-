// Check if a file exists before reading from it.

#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewText.txt", "w");
    if(fptr == NULL) {
        printf("File doesn't exists\n");
    } else {
        fclose(fptr);
    }
    fclose(fptr);
    return 0;
}