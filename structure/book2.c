//point operator
#include<stdio.h>

struct book {
char name[20];
float price ;
int pages;
};
int main( )
{
struct book b1, b2 ;
printf ( "\nEnter names, prices & no. of pages of 2 books\n" );
scanf ( "%s %f %d", b1.name, &b1.price, &b1.pages);
scanf ( "%s %f %d", b2.name, &b2.price, &b2.pages );
printf ( "\nAnd this is what you entered" );
printf ( "\n%s %f %d", b1.name, b1.price, b1.pages);
printf ( "\n%s %f %d", b2.name, b2.price, b2.pages );
return 0;
}
