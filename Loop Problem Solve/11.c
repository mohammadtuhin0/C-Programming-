#include <stdio.h> 
 
int main() { 
    int x = 0; 
    int p = 0; 
    int sum = 0; 
    int q;   
 
    p = 1; 
    x = 2; 
    sum = 0; 
 
    while (p < 12) { 
        q = x + p - (int)((sum + 7.0 / 3.0) / 3.0) % 2;  
        sum = sum + x + q; 
        x += 1; 
        printf("%d\n", sum); 
 
        if (x > 5) { 
            p += 4 / 2;    
        } else { 
            p += (3 % 1);  
        } 
    } 
 
    sum = (int)(sum + p); 
    printf("%d\n", sum); 
 
    return 0; 
}