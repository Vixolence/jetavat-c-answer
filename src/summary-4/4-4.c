#include <stdio.h>

void main() 
{
    char num[5];
    char name[30];

    printf("No : ");
    scanf("%s", num);
    printf("Name : ");
    scanf("%s", name);

    printf("%s\t%s \n" ,num , name);
}
