#include <stdio.h>
void main()
{
    int student_age[5],i = 1;
    char student_name[10][10];
    for (int count = 0; count < 5; count++)
    {
        printf("Input [%d] student name : ",i);
        scanf("%s", student_name[count]);
        printf("Input [%d] student age : ", i++);
        scanf("%d", &student_age[count]);
    } 
}
