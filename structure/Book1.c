//arrow operator
#include <stdio.h>
struct book{
char name[20];
float price;
int pages;
};
int main()
struct book *ptr,b[5];
int i;
ptr=b;
for(i=0;i<3;i++)
{
printf("\nEnter Book Name, Price and Pages :");
scanf("%s%f%d", (ptr+i)->name, &(ptr+i)->price, &(ptr+i)->pages);
}
printf("\nBO0K\tPRICE\tPAGES");
for(i=0;i<3;i++)
{
printf("\n%s\t%f.\t%d",ptr[i].name,ptr[i].price, ptr[i].pages);
}