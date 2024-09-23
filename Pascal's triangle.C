#include <stdio.h>
int main() {
  int rows, i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 0; i < rows; i++) {
    // Print spaces
    for (j = 0; j < rows - i - 1; j++) {
      printf("  ");
    }
    // Print numbers
    int number = 1;
    for (j = 0; j <= i; j++) {
      printf("%4d", number);
      number = number * (i - j) / (j + 1);
    }
    printf("\n");
  }
  return 0;
}