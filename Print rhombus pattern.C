#include <stdio.h>
int main() {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  // Print the rhombus pattern
  for (int i = 1; i <= rows; i++) {
    // Print spaces
    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }
    // Print stars
    for (int j = 1; j <= rows; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
