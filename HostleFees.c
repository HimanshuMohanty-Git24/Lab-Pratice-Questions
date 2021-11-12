/*calculate Collage fees*/
#include <stdio.h>
int main()
{
    float fees, hostel, food, total ;

    printf("\nEnter fees of collage:");
    scanf("%f", &fees);
    hostel = 0.3*fees;
    food = 0.2*fees;
    total = fees+hostel+food ;
    printf("Collage fees = %f\n", fees);
    printf("Hostel fees = %f\n", hostel);
    printf("Food fees = %f\n", food);
    printf("Total fees of collage %f\n", total);

        return 0;
}
