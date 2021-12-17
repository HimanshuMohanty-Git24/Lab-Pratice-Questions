//Himasnshu Mohanty 2105719
#include<stdio.h>
int main()
{

    int i, count=0,  marks[20],fail=0;
    float sum=0, avg;
    
    
    for (i = 0; i < 20; i++)
    {
        printf ("\nEnter marks:");
        scanf("%d", &marks[i]);
    
    }
    
    for (i = 0; i < 20;i++)
    {
        sum = sum + marks[i];
        if (marks[i] > 89)
            count++;
        else if(marks[i]<40)
            fail++;
    }
    avg = sum/20;
    printf("\nAverage marks = %f", avg);
    printf("\nNumber of students secured O grade = %d", count);
    printf("\nNumber of student Failed=%d", fail);
    return 0;
}