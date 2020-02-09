#include <stdio.h>

void main() 
{
    int number;
    int count = 1;

    printf("Input Number = ");
    scanf("%d", &number);

    while (count <= number) 
        printf("Number = %d \n", count++);
}