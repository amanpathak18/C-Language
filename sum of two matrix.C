#include <stdio.h>
int main() {
  int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;
  // Get elements of the first matrix
  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      printf("Enter element [%d][%d]: ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
  // Get elements of the second matrix
  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      printf("Enter element [%d][%d]: ", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }
  // Calculate the sum of the matrices
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  // Print the sum matrix
  printf("Sum of the matrices:\n");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}