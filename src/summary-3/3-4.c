#include <stdio.h>

void main () {
    if ((10 != 5) && (7 <= 7))
        printf("4.1 T\n");
    else
        printf("4.1 F\n");

    if ((2 < 5) || (9 <= 7)) 
        printf("4.2 T\n");
    else
        printf("4.2 F\n");

    if ((8 == 8) && !(3 > 2))
        printf("4.3 T\n");
    else 
        printf("4.3 F\n");
    

}