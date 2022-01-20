#include <stdio.h>

int main()
{
  int num[3][4] = {{4, 2,  9,  7},{5, 6,  7,  8},{9, 10, 11, 12}};

  int *ptr = &num[0][0];

  int ROWS = 3, COLS = 4,TOTAL_CELLS = ROWS * COLS,i;

  printf("\n\n");

  printf("Element\tAdress\n");

  for (i = 0; i < TOTAL_CELLS; i++) 
  {
    printf("%d ", *(ptr + i));
    printf("      %u ", &ptr+i);
    printf("\n");
  }

  printf("\n\n");
  printf("%d",sizeof(num));
  int a[6]={2,7,3,1,5,9};
  printf("\n%d",a[5]+6);

  int arr[5]={5,7,3,1,2};
  arr[2]=arr[1];
  arr[1]=arr[3];
  arr[2]=arr[2]+arr[3];
  printf("\n%d,%d",arr[1],arr[2]);

  int fun[2][3]={{1,2,3},{4,5,6}},p=1,q=0;
  fun[p][q]=fun[q][p];
  printf("\n%d,%d",fun[p][q],fun[q+1][p+1]);

  int pinu[2][1][2];
  printf("\n%d",sizeof(pinu));

  int ary[3]={1,2};
  printf("\n%d %d",ary[2]);







  
  return 0;
}