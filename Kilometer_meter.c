#include<stdio.h>
int main()
{
    float km, m;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;
    printf("The distance in Meters: %f\n", m);
    
    return (0);
}
