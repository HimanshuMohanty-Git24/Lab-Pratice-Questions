#include<stdio.h>

int main()

{

    int leapdays,firstday,yr;

    long int normaldays,totaldays;

    printf(“enter the year\n”);

    scanf(“%d”,&yr);

    normaldays= (yr-1)*365L;

    leapdays=(yr-1)/4- (yr-1)/100+(yr-1)/400;

    totaldays=normaldays+leapdays;

    firstday=totaldays%7;

    printf(“%d\n%d\n%d\n%d\n”,normaldays,leapdays,totaldays,firstday);

    if(firstday==0)

    printf(“\nmonday”);

    if(firstday==1)

    printf(“\ntuesday”);

    if(firstday==2)

    printf(“\nwednesday”);

    if(firstday==3)

    printf(“\nthrusday”);

    if(firstday==4)

    printf(“\nfriday”);

    if(firstday==5)

    printf(“\nsaturday”);

    if(firstday==6)

    printf(“\nsunday”);

    printf(“press any key to exist”);

    getch();

    return 0;

}