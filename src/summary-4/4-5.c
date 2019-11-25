#include <stdio.h> 
#include <string.h>
#include <conio.h>

void main() {
   float Width, Long, Area;

   printf("Input Width = ");
   scanf("%f", &Width);
   printf("Input Long = ");
   scanf("%f", &Long);
 
   Area = Width * Long;

   printf("********** Area ********** \n");
   printf("%.2f", Area);
}
