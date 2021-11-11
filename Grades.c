#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,t,p;

    printf("\n Enter marks of 5 subjects each out of 100 ");
    printf("\n\n ********************************************");

    printf("\n\n Maths = ");
    scanf("%d",&s1);

    printf("\n Science = ");
    scanf("%d",&s2);

    printf("\n English = ");
    scanf("%d",&s3);

    printf("\n History = ");
    scanf("%d",&s4);

    printf("\n Geography = ");
    scanf("%d",&s5);
    printf("\n ********************************************");

    t=s1+s2+s3+s4+s5;  //Total
    printf("\n Total marks = %d/500",t);

    p=t/5;  //Percentage
    printf("\n\n Percentage = %d %%",p);
    printf("\n ********************************************");
    if(p>=90 && p<=100)
        {
        printf("\n\n Your Grade : O\n");
        return 0;
        }

    if(p>=80 && p<=89)
        printf("\n\n Your Grade : E\n");

    else if(p>=70 && p<=79)
        printf("\n\n Your Grade : A\n");

        else if(p>=60 && p<=69)
        printf("\n\n Your Grade : B\n");

            else if(p>=50 && p<=59)
            printf("\n\n Your Grade : C\n");

                else if(p>=40 && p<=49)
                printf("\n\n Your grade : D\n");

    else
        printf("\n\n You Are Fail\n");

    

    return 0;;
}