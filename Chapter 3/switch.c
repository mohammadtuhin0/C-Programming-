#include <stdio.h>

int main(){
    int day;
    printf("Enter day: ");
    scanf("%d", &day);

    switch(day) {
        case 1 : printf("Satureday");
                break;
        case 2 : printf("Sunday");
                break;
        case 3 : printf("Monday");
                break;
        case 4 : printf("Tuesday");
                break;
        case 5 : printf("wednesday");
                break;
        case 6 : printf("Thursday");
                break;
        case 7: printf("Friday");
                break;
        default : printf("Not a valid day");

    }
    return 0;
}