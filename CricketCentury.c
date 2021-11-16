//16-Nov-2021
#include<stdio.h>


int main()

{

    int score, i=0, count=0;

    again:
    printf ("\nEnter the score of next player no %d = ", i);
    scanf("%d", &score);

    if (score < 0) goto again;

    if (score >=100)


    count++;

    i++;

    if (i < 10) goto again;

    printf ("\nTotal no. of players made Century = %d\n", count);

    return(0);

}
   