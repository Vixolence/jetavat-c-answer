#include <stdio.h>

void main() 
{
    int point;
    
    printf("Input your point : ");
    scanf("%d", &point);

    if (point >= 80) 
        printf("4");
    else if (point >= 75) 
        printf("3.5");
    else if (point >= 70)
        printf("3");
    else if (point >= 65)
        printf("2.5");
    else if (point >= 60) 
        printf("2");
    else if (point >= 55) 
        printf("1.5");
    else if (point >= 50) 
        printf("1");
    else 
        printf("0");
}