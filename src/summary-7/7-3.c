#include <stdio.h>
void main()
{
    int student[5],i = 1;
    for (int count = 0; count < 5; count++)
    {
        printf("Input [%d] student age : ", i++);
        scanf("%d", &student[count]);
    }
}