#include <stdio.h>

void main() {
    int first,last,i;
    printf("Enter first number : ");
    scanf("%d", &first);
    printf("Enter last number : ");
    scanf("%d", &last);
    
    printf("\n");
    printf("Number can div 5 : (%d) To (%d)\n", first , last);
    for (i = first; i <= last; i++) {
        if ((i % 5) == 0) {
           printf("%d ",i);          
        }
        
    }
}