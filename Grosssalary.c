//calculation of gross salary
#include<stdio.h>

int main()
{
    float gs, bs, hra, da;
    
    printf("\nEnter the basic salary:");
    scanf("%f", &bs);

    if (bs<1500)
    {
        hra = bs*10/100;
        da = bs*40/100;
    }
    else
    {
        hra = 500;
        da = bs*50/100;
    }

    gs = bs+da+hra;

    printf("Gross salary is = $.%f\n", gs);
    
    return 0;
}
