// File Pointer :
// FILE is a (hidden) structure that needs to be created for opening a file 
// A FILE ptr that points to this structure & is used to access the file.
        // FILE *fptr;


#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    fclose(fptr);
    return 0;
}