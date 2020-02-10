#include <stdio.h>
void main()
{
    int student[5],i = 1, sum = 0;
    char student_name[10][10];
    for (int count = 0; count < 5; count++)
    {
        printf("Input [%d] student name : ",i)
        scanf("%s",&student[name]);
        printf("Input [%d] student age : ", i++);
        scanf("%d", &student[count]);
    }
    for (int arr_count = 0; arr_count < 5; arr_count++)
        sum += student[arr_count];
    double avg = sum / 5;
    printf("Average of all student ages is %.3f", avg);
}