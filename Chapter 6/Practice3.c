// Will the address output be same?

#include <stdio.h>
void printAddress(int n);

int main(){
    int n = 4;

    printf("Address of n is: %u\n", &n);
    printAddress(n);
    
    return 0;
}
// call by value
void printAddress(int n) {
    printf("Address of n is: %u\n", &n);
}