#include <stdio.h>

int Add(int num1,int num2);
int Difference(int num1,int num2);
int Multiply(int num1,int num2);
int Division(int num1,int num2);

void main() 
{
    int num1,num2,menu;
    printf("Please Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Please Enter Number 2 : ");
    scanf("%d", &num2);

    printf("Menu \n");
    printf("1. Addition \n");
    printf("2. Difference \n");
    printf("3. Multiply \n");
    printf("4. Division \n");
    printf("Please select menu : ");
    scanf("%d",&menu);

    if (menu == 1) 
        printf("%d + %d = %d",num1, num2,Add(num1,num2));
    else if (menu == 2)
        printf("%d - %d = %d",num1, num2,Difference(num1,num2));
    else if (menu == 3)
        printf("%d * %d = %d",num1, num2,Multiply(num1,num2));
    else if (menu == 4)
        printf("%d / %d = %d",num1, num2,Division(num1,num2));
    else
        printf("ERROR");
}

int Add(int num1,int num2) 
{
    return num1+num2;
}
int Difference(int num1,int num2)
{
    return num1-num2;
}
int Multiply(int num1,int num2)
{
    return num1*num2;
}
int Division(int num1,int num2)
{
    return num1/num2;
}