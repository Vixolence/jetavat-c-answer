#include <stdio.h>

void main() {
    int number;
    int count = 1;

    printf("Input Number = ");
    scanf("%d", &number);

    do {
        printf("%d \n" , count);
        count++;
    }
    while (count <= number);
}