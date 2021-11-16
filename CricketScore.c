//16-Nov-2021
#include<stdio.h>

int main()
{
   int score, sum_score=0, i=1;

    float avg_score ;

    repeat:

    printf("\nEnter the score of next player no %d=",i); 
    scanf("%d", &score);

    sum_score += score;          //sum_score= sum_score + score;

    i++;

    if(i<=11) goto repeat;

    avg_score = (float)sum_score/11.0; 

    printf ("\nTotal Score = %d and Average Score = %f\n", sum_score, avg_score); 
     
    return(0);


    return 0;
}
