#include <stdio.h>
#define g 9.8
int main()
{
    int u,t;
    float v, s;

    printf("Give the initial velocity:");
    scanf("%d", &u);
    t=1;
    v =u+ g*t;
    s = u*t+ g*t*t/2;
    printf("\nVelocity = %f m/s and Distance covered %f m after 1s", v, s);

    t++;
    v = u+ g*t;
    s = u*t + g*t*t/2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after 2s\n", v, s);

    t++;
    v = u+ g*t;
    s = u*t + g*t*t/2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after 3s\n", v, s);

    t++;
    v = u+ g*t;
    s = u*t + g*t*t/2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after 4s\n", v, s);

    t++;
    v = u+ g*t;
    s = u*t + g*t*t/2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after 5s\n", v, s);


    return 0;
}