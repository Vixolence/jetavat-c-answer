#include <stdio.h>

void main() {
    int age[5];
    double sum = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    double avg = 0;
    int count = 0;

    for (i = 0; i < 5; i++) {
        count++;
        printf("Please fill [%d] student age : ", count);
        scanf("%d", &age[i]);
    }
    
}