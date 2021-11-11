//primary voltage secondary voltage
#include<stdio.h>

int main()
{
    int pt, st, pv,sv;

    printf("\nEnter the primary voltage:\n");
    scanf("%d",&pv);

    printf("\nEnter the number of primary turns:\n");
    scanf("%d",&pt);

    printf("\nEnter the number of secondary turns:\n");
    scanf("%d",&st);
    
    sv = (pv*st)/pt;

    printf("\nThe secondary voltage is : %d\n",sv);

    return 0;
}
