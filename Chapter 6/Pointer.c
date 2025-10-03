#include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    // Address
    printf("%p\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    
    int _age = *ptr;
    printf("%d\n", _age);

    char name = 'T';
    char *x = &name;
    char _x = *x;
    printf("%c", _x);

    return 0;
}