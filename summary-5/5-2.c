#include <stdio.h>

void main() {
    int x = 3, y = 10;
    if ((3/x) < y) 
    {
        x = x + 2;
        y = y + 1;
    }
    printf("x = %d \n" , x);
    printf("y = %d \n" , y);

    // x = 5
    // y = 11
    // Completed
}