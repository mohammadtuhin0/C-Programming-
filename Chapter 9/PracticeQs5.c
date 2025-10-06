// Make a structure to store Bank Account Information of a customer of ABC Bank.
// Also, make an alias for id.

#include <stdio.h>

typedef struct bankABC {
    int acc;
    char name[100];
} acc;
int main(){
    acc acc1 = {123, "Tuhin"};
    acc acc2 = {124, "Shradha"};
    acc acc3 = {125, "Mokku"};

    printf("Acc No: %d\n", acc1.acc);
    printf("Acc Name: %s\n", acc1.name);

    printf("Acc No: %d\n", acc2.acc);
    printf("Acc Name: %s\n", acc2.name);

    printf("Acc No: %d\n", acc3.acc);
    printf("Acc Name: %s\n", acc3.name);
    return 0;
}