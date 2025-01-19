#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int rows, cols;
  int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d %d", &rows, &cols);

  printf("Enter the elements of the first matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Addition of matrices
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("The sum of the matrices is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  // Multiplication of matrices
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = 0;
      for (int k = 0; k < cols; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  printf("The product of the matrices is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}