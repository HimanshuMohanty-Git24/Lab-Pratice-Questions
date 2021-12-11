#include <stdio.h>

int swap(int a,int b)
{
    int temp;
   printf("Values before swapping - \n a = %d, b = %d \n\n", a, b);

   temp  = a;
   a  = b;
   b  = temp;

   printf("Values after swapping - \n a = %d, b = %d \n", a, b);
   
   return 0;
}
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    swap(a,b);
}