#include <stdio.h>

int main()
{
    int po;
    printf("press 1, if the object is at infinity:\n");
    printf("press 2, if the object is beyond the center of the curvecture:\n");
    printf("press 3, if the object is at the center of the curvecture:\n");
    printf("press 4, if the object is between C and F:\n");
    printf("press 5, if the object is at focus F:\n");
    scanf("%d", &po);
    if (po == 1)
    {
        printf("if the position is at infinity\n");
        printf("position of the image is at the focus F\n");
        printf("size of the image is highly dimished\n");
        printf("nature of the image is real and inverted\n");
    }
    else if (po == 2)
    {
        printf("if the position is beyond the center of curvecture C\n");
        printf("position of the image is between F and C\n");
        printf("size of the image is dimished\n");
        printf("nature of the image is real and inverted\n");
    }
    else if (po == 3)
    {
        printf("if the position is at the center of curvecture C\n");
        printf("position of the image is at C\n");
        printf("size of the image is as the object\n");
        printf("nature of the image is real and inverted\n");
    }
    else if (po == 4)
    {
        printf("if the position is between C and F\n");
        printf("position of the image is beyond C\n");
        printf("size of the image is enlarged\n");
        printf("nature of the image is real and inverted\n");
    }
    else if (po == 5)
    {
        printf("if the position is at focus F\n");
        printf("position of the image is at infinity\n");
        printf("size of the image is highly enlarged\n");
        printf("nature of the image is real and inverted\n");
    }
    else
    {
        printf("enter the correct order for the program to run and try again\n");
    }

    return 0;
}