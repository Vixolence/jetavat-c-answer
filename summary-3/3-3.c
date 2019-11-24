#include <stdio.h>

void main() {
    int i,j;

    i = 10, j = 2;
    printf("\n");
    printf("1. Result = %d \n", i*j++);
    printf("j = %d \n\n", j);

    i = 10, j = 2;
    printf("2. Result = %d \n", i*++j);
    printf("j = %d \n\n", j);

    i = 10, j = 2;
    printf("3. Result = %d \n", i*j--);
    printf("j = %d \n\n", j);

    i = 10, j = 2;
    printf("4. Result = %d \n", i*--j);
    printf("j = %d \n\n", j);

}