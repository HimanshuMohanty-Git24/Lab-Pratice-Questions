//16-Nov-2021
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1;
    again:
    printf("\n%d\n",i);

    i++;

    if(i<21) goto again;




    return 0;
}
