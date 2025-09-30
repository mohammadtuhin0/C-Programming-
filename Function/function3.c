#include <stdio.h>
void salam();
void bonjour();

int main(){
    printf("Enter f for french & B for bangladesh");
    char ch;
    scanf("%c", &ch);

    if(ch == 'b') {
        salam();
    } else {
        bonjour();
    }
    return 0;
}
void salam() {
    printf("Assalamuwalaikum\n");
}
void bonjour()  {
    printf("I am franch\n");
}