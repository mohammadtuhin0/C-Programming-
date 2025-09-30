#include <stdio.h>
void bd();
void french();

int main(){
    char ch;
    printf("Enter f for French and b for Bangladesh: \n");
    scanf("%c", &ch);

    if(ch == 'b') {
        bd();
    } else {
        french();
    }
    return 0;
}

void bd() {
    printf("Assamuwailum\n");
}
void french() {
    printf("Bonjour\n");
}