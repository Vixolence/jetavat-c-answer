#include <stdio.h>

void name_loop_func(char name[]);
int i = 0;
void main()
{
    char name[10];
    printf("Please type your name : ");
    scanf("%s",name);
    name_loop_func(name);
}

void name_loop_func(char name[])
{
    for (int count = 0; count < 10; count++)
        printf("%d. %s \n",++i,name);
}