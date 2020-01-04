#include <stdio.h>

void main() {
   int Width, Long; 
   float Area;

   printf("Input Width = ");
   scanf("%d", &Width);
   printf("Input Long = ");
   scanf("%d", &Long);
 
   Area = Width * Long;

   printf("********** Area ********** \n");
   printf("%.2f", Area);
}
