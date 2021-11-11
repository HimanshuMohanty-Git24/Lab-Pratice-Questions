#include<stdio.h>

int main()
{
    float r1,r2,r3,voltage,rs;
    float is,t,rp,ip;

    printf("\nEnter the value of R1, R2 and R3:\n");
    scanf("%f%f%f",&r1,&r2,&r3);
    printf("\nEnter the value of voltage:\n");
    scanf("%f",&voltage);

    rs = r1+r2+r3;
    printf("\nResistance in series:%f\n",rs);

    is = voltage/rs;
    printf("\nCurrent in series:%f\n",is);

    t = (1/r1)+(1/r2)+(1/r3);
    rp = 1/t;
     printf("\nResistance in parallel:%f\n", rp);

    ip = voltage/rp;
    printf("\nCurrent in parallel:%f\n", ip);

    return 0;
}

