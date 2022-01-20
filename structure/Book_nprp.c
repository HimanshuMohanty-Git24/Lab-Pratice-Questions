//2105719 Himanshu Mohanty 18/01/2022
#include <stdio.h>
struct book
{
char name [20];
float price;
int pages;
};
int main()
{
    struct book b[10];
    int i;
    for (i=0;i<4;i++)
    {
        printf("\nEnter name, price and pages of book %d:",i);
        scanf("%s %f %d",b[i].name,&b[i].price,&b[i].pages);
    }
    printf("\nNAME\tPRICE\tPAGES");
    for (i=0;i<4;i++)
    {
    printf("\n%s\t%f\t%d",b[i].name,b[i].price,b[i].pages);
    }

    return 0;
}