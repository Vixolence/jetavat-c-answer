#include <stdio.h>

void main() {
    int number;
    int count;

    printf("Input Number = ");
    scanf("%d", &number);

    for (count = 1; count <= number; count++) {
        printf("%d \n", count);
    }
}