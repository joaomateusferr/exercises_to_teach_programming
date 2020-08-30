#include <stdio.h>
#include <stdlib.h>

int main()
{
   int l1, l2, l3;

   printf ("Enter side 1 of the triangle: ");
   scanf ("%d", &l1);

   printf ("Enter side 2 of the triangle: ");
   scanf ("%d", &l2);
   
   printf ("Enter side 3 of the triangle: ");
   scanf ("%d", &l3);

   if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1) {

      if (l1 == l2 && l2 == l3 && l3 == l1) {
         printf ("Equilateral triangle");
      } else if (l1 == l2 || l2 == l3 || l3 == l1) {
         printf ("Isosceles triangle");
      } else if (l1 != l2 && l2 != l3 && l3 != l1) {
         printf ("Scalene triangle");
      }
   }
   
   return 0;
}
