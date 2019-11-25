#include <stdio.h>
#define MINDIFF 2.25e-308

void main() {
    int input;
    double squareroot;
    printf("Please fill your number : ");
    scanf("%d", &input);
    squareroot = sqrt(input);
    printf("%f", sqrt);
}

double sqrt(double square) {
    double root=square/3, last, diff=1;
    if (square <= 0) return 0;
    do {
        last = root;
        root = (root + square / root) / 2;
        diff = root - last;
    } 
    while (diff > MINDIFF || diff < -MINDIFF);
    return root;
}