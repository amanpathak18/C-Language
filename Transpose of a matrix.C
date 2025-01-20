#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int rows, cols;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int array[MAX_SIZE][MAX_SIZE];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  printf("The transpose of the array is:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ", array[j][i]);
    }
    printf("\n");
  }

  return 0;
}