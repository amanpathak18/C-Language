#include <stdio.h>
int sum_natural_numbers(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}
int main(void) {
  int n;
  printf("Enter a natural number: ");
  scanf("%d", &n);
  int sum = sum_natural_numbers(n);
  printf("The sum of natural numbers up to %d is %d\n", n, sum);
  return 0;
}