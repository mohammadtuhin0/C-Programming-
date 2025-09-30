#include <stdio.h>

int main(){
    // for(int i = 10; i<= 50; i++)
    // {
    //     if(i % 2 != 0){
    //         printf("%d\n", i);
    //     }
    // }

    // Using while loop
    int i = 10;
    while(i <= 50)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}