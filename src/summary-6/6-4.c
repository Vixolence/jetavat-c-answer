#include <stdio.h>

void main() {
    int i = 0;
    int sum = 0;

    while (i < 100) {
        i = i + 5;
        sum = sum + i;
    }
    
    printf("%d", sum);
}