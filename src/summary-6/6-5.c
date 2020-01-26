#include <stdio.h>

void main() 
{
    int first,last,i;
    printf("Enter first number : ");
    scanf("%d", &first);
    printf("Enter last number : ");
    scanf("%d", &last);
    
    for (i = first; i <= last; i++) 
    {
        if ((i % 5) == 0) 
           printf("%d ",i);          
    }
}