#include <stdio.h>
int main() {
  int rows, columns;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);
  // Print the top row of stars
  for (int i = 0; i < columns; i++) {
    printf("*");
  }
  printf("\n");
  // Print the middle rows
  for (int i = 0; i < rows - 2; i++) {
    printf("*");
    for (int j = 0; j < columns - 2; j++) {
      printf(" ");
    }
    printf("*\n");
  }
  // Print the bottom row of stars
  for (int i = 0; i < columns; i++) {
    printf("*");
  }
  printf("\n");
  return 0;
}