//Himasnshu Mohanty 2105719
#include<stdio.h>
int main()
{
    int num[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the array num[%d][%d]", i, j);
            scanf("%d", &num[i][j]);
        }
        
    }
    printf("%d\t%d\t%d\t%d\t%d\n", num[0][0], num[0][1], num[0][2], num[0][3],num[0][4], num[0][5]);
    printf("%d\t%d\t%d\t%d\t%d\n", num[1][0], num[1][1], num[1][2], num[1][3],num[1][4], num[1][5]);
    printf("%d\t%d\t%d\t%d\t%d\n", num[2][0], num[2][1], num[2][2], num[2][3],num[2][4], num[2][5]);
    printf("%d\t%d\t%d\t%d\t%d\n", num[3][0], num[3][1], num[3][2], num[3][3],num[3][4], num[3][5]);

    return 0;
}