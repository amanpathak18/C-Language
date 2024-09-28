//compute the sum of natural number 
#include <stdio.h>
int main() {
  int n, i, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (i = 1; i <= n; ++i) {
    sum += i;
  }
  printf("Sum of natural numbers up to %d = %d\n", n, sum);
  return 0;
}