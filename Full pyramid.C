#include <stdio.h>
  int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i) {
      // Print spaces
      for (j = 1; j <= rows - i; ++j) {
        printf("  ");
      }
      // Print stars
      for (k = 1; k <= 2 * i - 1; ++k) {
        printf("* ");
      }
      printf("\n");
    }
  }