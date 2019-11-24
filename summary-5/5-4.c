#include <stdio.h>
#include<conio.h>

int main (){
    int number;
    int cost;
    printf("Enter your number : ");
    scanf("%d" , &number);
    if (number <= 10) { 
        cost = number * 20;
        }

    else {
        cost = 200 + ((number - 10) * 10);
    }
    printf("%d", cost);
    getch();
}