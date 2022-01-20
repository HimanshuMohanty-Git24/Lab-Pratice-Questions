//2105719 Himanshu Mohanty 18/01/2022
#include <stdio.h>

struct Distance
{
   int feet;
   float inch;
};

int main()
{
    struct Distance d1, d2, total;
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   total.feet = d1.feet + d2.feet;
   total.inch = d1.inch + d2.inch;

   while (total.inch >= 12.0)
   {
      total.inch = total.inch - 12.0;
      ++total.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", total.feet, total.inch);
   return 0;
}