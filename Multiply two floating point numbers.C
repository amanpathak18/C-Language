#include <stdio.h>
int main() {
  double num1, num2, product;
  printf("Enter first number: ");
  scanf("%lf", &num1);
  printf("Enter second number: ");
  scanf("%lf", &num2);
  product = num1 * num2;
  printf("%.2lf * %.2lf = %.2lf\n", num1, num2, product);
  return 0;
}