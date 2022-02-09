//3. Write a program to multiply two matrices and display the result.

#include <stdio.h>
 
int main()
{
  int rows1, col1, rows2, col2, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &rows1, &col1);
  printf("Enter elements of first matrix\n");
 
  for (i = 0; i < rows1; i++)
    for (j = 0; j < col1; j++)
      scanf("%d", &first[i][j]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &rows2, &col2);
 
  if (col1 != rows2)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (i = 0; i < rows2; i++)
    {
      for (j = 0; j < col2; j++)
      {
        scanf("%d", &second[i][j]);
      }
    }
 
    for (i = 0; i < rows1; i++) 
    {
      for (j = 0; j < col2; j++) 
      {
        for (k = 0; k < rows2; k++) 
        {
          sum = sum + first[i][k]*second[k][j];
        } 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < rows1; i++) 
    {
      for (j = 0; j < col2; j++)
      {
        printf("%d ", multiply[i][j]);
      } 
      printf("\n");
    }
  }
 
  return 0;
}
