#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,f;
    printf("Enter the range:");
    scanf("%d%d",&i,&f);

    again:
    printf("\n%d\n",i);

    i++;

    if(i<(f+1)) goto again;




    return 0;
}
