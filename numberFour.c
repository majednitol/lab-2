#include <stdio.h>
void addMatrix(int rows, int cols)
{
    int i,j, a[50][50], b[50][50], sum[50][50];

    printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

    for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }


  printf("\nSum of two matrices: \n");
  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == cols - 1) {
        printf("\n\n");
      }
    }

}

int main() {

  int rows,cols;
  printf("Enter the number of rows (between 1 and 50): ");
  scanf("%d", &rows);
  printf("Enter the number of columns (between 1 and 50): ");
  scanf("%d", &cols);

    addMatrix(rows,cols);


  return 0;
}